# DCM-DTM API
## This document describes the API between the `DCM` and the `DTM`.

### Notes:
* The DTM runs a simple http server on localhost:4430 (127.0.0.1 port 4430)
* The DTM server has only __1__ end point with __2__ methods available. 
## End points:
* `/`
## Methods available
* `GET`: an endpoint for SPC owners that displays simple info regarding the DCM/DTM operations
    * It only displays whether DCM has made contact w/ the DTM or not.
* `POST`: an endpoint for DCMs to post the messages they receive (from the __GSP__ or __DER__) 
## Contents:
### Since the __GET__ endpoint is mainly for debugging/administration, which is irrelavent and hard-coded. The following is a description of the API with respect to the __POST__ endpoint.
* `POST` messages to the DTM server:
    * The client (__DCM__) posts a GSP messages using the following XML format:
        * `To`: tag to describe who is the message sent to.
        * `From`: tag to describe who is the message from.
        * `Content`: tag to describe the content
            * `CTA_Message`: tag that describes (encaplsates) the messages sent/received by the __DER__:
                * `Target`: the `CTA2045` command targeted (shed, endshed,..., etc).
                * `Body`: empty tag on basic requests that do not merit a response according to CTA2045 and has `response` parameters on responses (commodity read, device info, ..., etc) 
            * `GET_Request`/`GET_Response`/`Post_request`/`Post_response`: tag that describes the messages sent/recieved by the __GSP__:
                * `Target`: the `URL`/`Resource` targeted.
                * `Body`: body of the http request sent/recieved.
        * `DCM_timestamp`: Unix timestamp of when the message was received
## Examples:
* __GSP__ message example:
    1. DCM to GSP message exchange:
        * Post request from __DCM__ to __DTM__:
            * ```
                <dtm_log_entry logged="2021-05-18 15:55:16.728258">
                    <message>
                        <from>DCM</from>
                        <to>GSP</to>
                        <DCM_Topological_ID>x-x-x-x</DCM_Topological_ID>
                        <content>
                            <GET_request>
                                <target>/dcap</target>
                                <body />
                            </GET_request>
                        </content>
                        <DCM_timestamp>1621378516</DCM_timestamp>
                    </message>
                </dtm_log_entry>
                ```
        * Response from __DTM__ server:
            * 200: on valid XML
            * 400: on invalid XML 
    2. GSP to DCM message exchange: 
        * There are no examples as the current architecture is server-client and not pup-sub. Thus, clients (__DCM__'s) cannot initiate requests. 
* __DER__ message example:
    1. DCM to DER message exchange:
        * Post request from __DCM__ to __DTM__:
            * ```
                <dtm_log_entry logged="2022-01-06 17:15:22.526646">
                    <message>
                        <from>DCM</from>
                        <to>DER</to>
                        <DCM_Topological_ID>x-x-x-x</DCM_Topological_ID>
                        <content>
                            <CTA2045_Message>
                                <target>GetNameplateCommand</target>
                                <body>GetNameplate</body>
                            </CTA2045_Message>
                        </content>
                        <DCM_timestamp>1641518122</DCM_timestamp>
                    </message>
                </dtm_log_entry>
                ```
        * Response from __DTM__ server:
            * 200: on valid XML
            * 400: on invalid XML 
    2. DER to DCM message exchange: 
        * Post request from __DCM__ to __DTM__:
            * ```
                <dtm_log_entry logged="2022-01-06 17:15:22.558505">
                    <message>
                        <from>DER</from>
                        <to>DCM</to>
                        <DCM_Topological_ID>x-x-x-x</DCM_Topological_ID>
                        <content>
                            <CTA2045_Message>
                                <target>GetNameplateResponse</target>
                                <body>
                                    <message>
                                        <from>DER</from>
                                        <to>DCM</to>
                                        <content>
                                            <response>
                                                <type>Power 4500 Watts, Max Export Energy 2100 Wh, Max Import Energy 4500 Wh</type>
                                            </response>
                                        </content>
                                        <DCM_timestamp>1641518122</DCM_timestamp>
                                    </message>
                                </body>
                            </CTA2045_Message>
                        </content>
                        <DCM_timestamp>1641518122</DCM_timestamp>
                    </message>
                </dtm_log_entry>
                ```
        * Response from __DTM__ server:
            * 200: on valid XML
            * 400: on invalid XML 
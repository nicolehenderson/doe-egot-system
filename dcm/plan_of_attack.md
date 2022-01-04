# Test Plan List:

| PR | Description | Status | Testing Status|
| -- | ----------- | ------ | ------------- |
| 01 | The DCM __SHALL__ periodically request a list of controls from its GSP. | _In progress_ | _Not started_| 
| <h2>02</h2> | The DCM __SHALL__ record DER properties during a scheduled service. | _In progress_ | _Not started_ | 
| 03 | The DCM __SHALL__ ensure DER control meets scheduled service. | _In progress_ |_Not started_ |
| 04 | The DCM __SHALL__ encapsulate each incoming and outgoing message. | __Complete__ |__Complete__ |
| 05 | The DCM __SHALL__ send an encapsulation of each incoming and outgoing message to the DTMC. | __Complete__ | __Complete__ |
| 06 | The DCM __SHOULD__ revert to a default control state of energy reserve when not scheduled for service. | _In progress_ | _Not started_ |
| <h2>07<h2> | The DCM __SHOULD__ be configured by SPC with a DER time window of operation during registration. | _In progress_ | _Not started_ |
| <h2>08</h2> | The DCM __SHOULD__ be configured by SPC with DER comfort thresholds during registration. | _In progress_ | _Not started_ |
| 09 | The DCM __SHOULD__ follow CSIP COMM-006 for basic registration to GSP. | _In progress_ | _Not started_ |
| 10 | The DCM __SHOULD__ be assigned topological location by GO during registration if applicable. | _Not started_ | _Not started_ |
| 11 | The DCM __SHOULD__ update the GSP when a scheduled service is received and started. | _In progress_ | _Not started_ |
| 12 | The DCM __SHOULD__ update GSP with DER properties after participating in scheduled service. | _Not started_ | _Not started_ |
| 13 | The DCM __SHOULD__ compare requested energy to DER properties after scheduled service. | _Not started_ | _Not started_ |
| 14 | The DCM __SHOULD__ check if the responses from the GSP are valid. | __Complete__ |  __Complete__ |
| 15 | The DCM __MAY__ resend a request once if a message sent to the GSP is determined to be invalid. | _Not started_ | _Not started_ |
| <h2>16</h2> | The DCM __MAY__ communicate with the DER within the manufacturer-specified time period to prevent a disconnect. | __Complete__ | __Complete__ |
| <h2>17</h2> | The DCM __MAY__ communicate with the DER to verify message transactions. | _Not started_ | _Not started_ |


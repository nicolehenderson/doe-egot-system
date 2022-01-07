# generate DCM certs
echo "generating DCM certs"
openssl req -x509 -nodes -newkey rsa:2048 -keyout build/bin/certs/private/client2.key -out build/bin/certs/client2.crt

# generate DTM certs

echo "generating DTM certs"
openssl req -x509 -nodes -newkey rsa:2048 -keyout build/bin/certs/private/server.key -out build/bin/certs/server.crt
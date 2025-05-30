# QR code generator
import qrcode as qr
li = ["name: sahil", "branch: it"]
data = '\n'.join(li)
qr = qr.QRCode(
    version=2,
    box_size=10,
    border=4,
)
qr.add_data(data)
img = qr.make(fit=True)
img = qr.make_image(fill_color="black", back_color="blue")
img.save("QR_code.png")
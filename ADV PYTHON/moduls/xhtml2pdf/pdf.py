from xhtml2pdf import pisa

with open("example.pdf", "wb") as html_file:
    pisa.CreatePDF(open("example.html"), dest=html_file)

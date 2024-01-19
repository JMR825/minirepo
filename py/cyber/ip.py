import os
def recon(ip):
    os.system(f"nmap -A -p -Pn {ip} -v")

recon(input("What ip would u like to scan"))
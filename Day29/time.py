#"cerner_2^5_2022"
#"cerner_2tothe5th_2022"

from datetime import datetime

now = datetime.now()

current_time = now.strftime("%H:%M:%S")
print("Current Time =", current_time)

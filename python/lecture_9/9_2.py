f = open('../ch_06_Files_and_Exceptions/Dengue_Daily_last12m_EN.csv', encoding='windows-1252')
count = 0
for i, ln in enumerate(f):
    ln = ln.strip()
    lst = ln.split(',')
    if 'Taipei City' in lst[5]:
        print(f'{lst[0]} {lst[3]:10s} {lst[4]:10s} {lst[5]:18s} {lst[6]}')
        count += 1

f.close()
print('number of cases', count)
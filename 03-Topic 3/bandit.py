def login(username='ccy', password='superpassword'):
    print('logging in with ', username, password)
    
login()

# bandit bandit.py
'''
Run started:2022-05-02 05:05:03.720540

Test results:
>> Issue: [B107:hardcoded_password_default] Possible hardcoded password: 'superpassword'
   Severity: Low   Confidence: Medium
   CWE: CWE-259 (https://cwe.mitre.org/data/definitions/259.html)
   Location: bandit.py:1:0
   More Info: https://bandit.readthedocs.io/en/1.7.4/plugins/b107_hardcoded_password_default.html
                Undefined: 0
                Low: 1
                Medium: 0
                High: 0
        Total issues (by confidence):
                Undefined: 0
                Low: 0
                Medium: 1
                High: 0
Files skipped (0):
'''

# bandit --help
'''
B101    assert_used
B102    exec_used
B103    set_bad_file_permissions
B104    hardcoded_bind_all_interfaces
B105    hardcoded_password_string
B106    hardcoded_password_funcarg
B107    hardcoded_password_default
B108    hardcoded_tmp_directory
B110    try_except_pass
B112    try_except_continue
.
.
.
'''

# bandit -r .
'''
Code scanned:
        Total lines of code: 31050
        Total lines skipped (#nosec): 0

Run metrics:
        Total issues (by severity):
                Undefined: 0
                Low: 249
                Medium: 4
                High: 7
        Total issues (by confidence):
                Undefined: 0
                Low: 0
                Medium: 31
                High: 229
Files skipped (0):
'''
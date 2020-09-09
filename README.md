# Data_Structure
 
計算分子量：
世界上所有物體皆由分子組成，而分子由原子組成，其中最常用來表達分子質量的單位稱為分子量，分子量亦約等於其組成分子的所有原子之原子量總和。
此題中假定 H 的原子量為 1、C 的原子量為 12、O 的原子量為 16
例如生活中常見的葡萄糖分子式為 C6H12O6，簡式亦可以表示成(CH2O)6，可計算出分子量等於(12*6+1*12+16*6=180)，醋之主成分為乙酸，其分子式為CH3COOH，可計算出分子量等於(12+1*3+12+16+16+1=60)，帕瑪森起司中含有丁酸，其分子式為 CH3(CH2)2COOH，可計算出分子量等於(12+1*3+(12+1*2)*2+12+16+16+1=88)，
此題希望同學撰寫一個程式，可計算出化學分子的分子量。

輸入

輸入分子的分子式，格式為一字串(String)，字串長度小於 1000 個字元，輸入0 的時候結束程式，此字串中僅會有 C、H、O、(、)符號以及小於 100 的正整數。


輸出

輸出為分子的分子量，以整數表示。

範例輸入
C6H12O6
(CH2O)6
CH3COOH
CH3(CH2)2COOH
((CH)2(OH2H)(C(H))O)3
0
範例輸出
180
180
60
88
222
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
string st[]={"Washington","Adams","Jefferson","Madison","Monroe","Adams","Jackson","Van Buren","Harrison","Tyler","Polk","Taylor","Fillmore","Pierce","Buchanan","Lincoln","Johnson","Grant","Hayes","Garfield","Arthur","Cleveland","Harrison","Cleveland","McKinley","Roosevelt","Taft","Wilson","Harding","Coolidge","Hoover","Roosevelt","Truman","Eisenhower","Kennedy","Johnson","Nixon","Ford","Carter","Reagan"};
ll a;
int main(){
scanf("%lld",&a);
cout<<st[a-1]<<endl;
}
/**
"Washington","Adams","Jefferson","Clinton","Madison,"None","Gerry,"None (1814-1817)
5. James Monroe (1817-1825)	Daniel D. Tompkins (1817-1825)
6. John Quincy Adams (1825-1829)	John C. Calhoun (1825-1829)
7. Andrew Jackson (1829-1837)	John C. Calhoun (1829-1832)
None (1832-1833)
Martin Van Buren (1833-1837)
8. Martin Van Buren (1837-1841)	Richard M. Johnson (1837-1841)
9. William Henry Harrison (1841)	John Tyler (1841)
10. John Tyler (1841-1845)	None (1841-1845)
11. James K. Polk (1845-1849)	George M. Dallas (1845-1849)
12. Zachary Taylor (1849-1850)	Millard Fillmore (1849-1850)
13. Millard Fillmore (1850-1853)	None (1850-1853)
14. Franklin Pierce (1853-1857)	William King (1853)
None (1853-1857)
15. James Buchanan (1857-1861)	John C. Breckinridge (1857-1861)
16. Abraham Lincoln (1861-1865)	Hannibal Hamlin (1861-1865)
Andrew Johnson (1865)
17. Andrew Johnson (1865-1869)	None (1865-1869)
18. Ulysses S. Grant (1869-1877)	Schuyler Colfax (1869-1873)
Henry Wilson (1873-1875)
None (1875-1877)
19. Rutherford B. Hayes (1877-1881)	William Wheeler (1877-1881)
20. James A. Garfield (1881)	Chester Arthur (1881)
21. Chester Arthur (1881-1885)	None (1881-1885)
22. Grover Cleveland (1885-1889)	Thomas Hendricks (1885)
None (1885-1889)
23. Benjamin Harrison (1889-1893)	Levi P. Morton (1889-1893)
24. Grover Cleveland (1893-1897)	Adlai E. Stevenson (1893-1897)
25. William McKinley (1897-1901)	Garret Hobart (1897-1899)
None (1899-1901)
Theodore Roosevelt (1901)
26. Theodore Roosevelt (1901-1909)	None (1901-1905)
Charles Fairbanks (1905-1909)
27. William Howard Taft (1909-1913)	James S. Sherman (1909-1912)
None (1912-1913)
28. Woodrow Wilson (1913-1921)	Thomas R. Marshall (1913-1921)
29. Warren G. Harding (1921-1923)	Calvin Coolidge (1921-1923)
30. Calvin Coolidge (1923-1929)	None (1923-1925)
Charles Dawes (1925-1929)
31. Herbert Hoover (1929-1933)	Charles Curtis (1929-1933)
32. Franklin D. Roosevelt (1933-1945)	John Nance Garner (1933-1941)
Henry A. Wallace (1941-1945)
Harry S. Truman (1945)
33. Harry S. Truman (1945-1953)	None (1945-1949)
Alben Barkley (1949-1953)
34. Dwight D. Eisenhower (1953-1961)	Richard Nixon (1953-1961)
35. John F. Kennedy (1961-1963)	Lyndon B. Johnson (1961-1963)
36. Lyndon B. Johnson (1963-1969)	None (1963-1965)
Hubert Humphrey (1965-1969)
37. Richard Nixon (1969-1974)	Spiro Agnew (1969-1973)
None (1973)
Gerald Ford (1973-1974)
38. Gerald Ford (1974-1977)	None (1974)
Nelson Rockefeller (1974-1977)
39. Jimmy Carter (1977-1981)	Walter Mondale (1977-1981)
40. Ronald Reagan (1981-1989)	George Bush (1981-1989)
41. George Bush (1989-1993)	Dan Quayle (1989-1993)
42. Bill Clinton (1993-2001)	Al Gore (1993-2001)
43. George W. Bush (2001-2009)	Dick Cheney (2001-2009)
44. Barack Obama (2009-2017)	Joe Biden (2009-2017)
**/
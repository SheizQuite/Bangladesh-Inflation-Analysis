# Bangladesh Inflation Rate Analysis — Detailed Analysis

## 1. Introduction
Inflation refers to the increase in the general price level of goods and services over time. The inflation rate represents the percentage change in prices from one period to another.
Inflation as measured by the consumer price index reflects the annual percentage change in the cost to the average consumer of acquiring a basket of goods and services that may be fixed or changed at specified intervals, such as yearly. The Laspeyres formula is generally used.
In this project, I analyzed Bangladesh's annual inflation rate from 1987 to 2025 using data stored in a CSV file and processed it using the C programming language.

 I focused on five main areas in my analysis:
- Year-to-year changes in inflation
- The highest and lowest inflation years
- Comparison of inflation across different periods
- Inflation volatility
- Implications for consumers and businesses

## 2.  Methodology
The data set I used, holds Bangladesh inflation rates from 1987 to 2025 a stretch of 39 years.
The data was stored in a CSV file with each row showing the year. Its matching annual inflation rate.
I used a C program to read the CSV file. It goes through each year. Processes the inflation rate. The program then calculates the following:

- The inflation rate across the entire period.

- The highest inflation rate recorded.

- The lowest inflation rate recorded.

- The year‑to‑year change in inflation measured in percentage points.

- The average inflation for three time periods.

- The standard deviation, for each of those three periods to analyze how volatile the inflation was 
The three periods analyzed are:
- 1987–1999
- 2000–2012
- 2013–2025

## 3. C Program Implementation 
I have used C to read and process the inflation data. In my code, first, it opens the CSV file using `fopen()` and reads the data using `fgets()`. It uses `sscanf()` function to extract the year and inflation rate from each row. Moreover, it uses variables, loops, conditional statements, and mathematical calculations to analyze the data. For example, the program compares each inflation rate with the previous year's rate to determine whether inflation increased or decreased. The program also keeps track of the highest and lowest inflation rates and calculates averages for the three selected periods. Standard deviation is calculated using the `sqrt()` function from the `math.h` library to measure how much inflation rates varied within each period. 

## 4. Year-to-Year Changes 
In my analysis I have calculated the change in inflation from one year to the next by subtracting the previous year's inflation rate from the current year's rate. A positive result indicates that inflation increased, while a negative result indicates that inflation decreased. For example, inflation increased by 4.98 percentage points from 1994 to 1995, while it decreased by 7.92 percentage points from 1995 to 1996. These year-to-year changes help identify periods when inflation changed relatively quickly.
Question may arise: Why Were Some Years Higher or Lower? Now, Inflation can change because of factors, including changes, in food and energy prices, supply disruptions, exchange rates, domestic demand and other economic conditions.
The highest and lowest inflation years should therefore be considered in the context of the conditions affecting Bangladesh during those periods.

## 5. Highest and Lowest Inflation Years and why
I found the highest inflation rate in the dataset occurred in **2011**, at **11.40%**, where the lowest inflation rate occurred in **2001**, at **2.01%**.
To identify them, the C program I wrote compares each year's inflation rate with the current highest and lowest values while reading the CSV file.
I tried to understand why inflation reached its highest and lowest levels. So, I reviewed information from several sources, including the World Bank, Bangladesh Bank, IMF, and other published economic reports. I am using two tables to present my findings in context of 2001 and 2011.
### Possible Reasons Behind the Lowest Inflation Year (2001)
| No. | Factor                                           | Background                                                                                             | Effect                                                                         | Source                                                                                                                     |
| --- | ------------------------------------------------ | ------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------- |
| 1   | **Relative stability in food prices**            | In 2001 Bangladesh's economy was not facing a global food crisis like the ones seen in 2007–08 or 2011. | Lower food inflation helped keep inflation low.                                | World Bank data shows that CPI inflation was only **2.0% in 2001** indicating a price environment.                         |
| 2   | **Lower international commodity price pressure** | The global increase in food and fuel prices seen in 2011 was not present in 2001.                      | Lower import costs limited price pressure in the domestic market.              | International economic reviews indicate that global price pressures were much lower in 2001 compared with years.           |
| 3   | **Moderate monetary and credit growth**          | The economy did not experience credit expansion that would create excessive demand.                    | Lower pressure from money supply and consumer demand helped contain inflation. | Research on Bangladeshs economy highlights the importance of managing money supply and credit to maintain price stability. |
| 4   | **Moderate economic growth**                     | The economy was growing,. There was no significant economic "overheating."                             | Demand-driven inflation remained limited.                                      | The 2001 economic review described a stable macroeconomic environment.                                                     |
| 5   | **Stable macroeconomic environment**             | There were no major monetary, fuel or food-market shocks affecting the economy.                        | Inflation remained relatively low and controlled.                              | Inflation was **2.01% in 2001** compared with **11.40%, in 2011**.                                                         |

### Possible Reasons Behind the Highest Inflation Year (2011)
| Factor                                           | What Happened?                                                               | Effect on Inflation                                                                    | Source                                                                                                                                                                                                                                           |
| ------------------------------------------------ | ---------------------------------------------------------------------------- | -------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Increase in food prices in the global market** | In 2010–11, food and other commodity prices in the market increased rapidly. | Food prices increased, which caused overall inflation to rise.                         | The World Bank noted that increases in food and commodity prices raised inflation in developing countries.        |
| **Increase in demand**                           | Economic growth, consumer spending and investment increased.                 | Higher demand for goods and services caused prices to rise.                            | The World Bank stated that expansionary policies and strong domestic demand made inflation control more difficult.|
| **Rapid expansion of private sector credit**     | Bank lending increased rapidly.                                              | Money supply and spending in the economy increased.                                    | ADB said that *rapid expansion in credit* was an important cause of inflation.                                    |       
| **Depreciation of the taka**                     | In 2011 the taka weakened against the US dollar.                             | The prices of imported food, fuel and raw materials increased.                         | According to ADB the depreciation of the taka put pressure on inflation.                                          |
| **Increase in fuel and electricity prices**      | The government adjusted fuel and electricity tariffs.                        | Transportation and production costs increased, which was reflected in consumer prices. | ADB reported that increases in fuel and power tariffs also fueled inflation.                                      |
| **Sharp increase, in food inflation**            | Food prices increased rapidly.                                               | It pushed CPI inflation upward.                                                        | In June 2011 overall inflation was 10.2% and food inflation was 12.5%.                                            |                                            
| **Peak level of inflation**                      | Inflation increased further in September 2011.                               | High inflation persisted.                                                              | In September 2011 overall inflation was 11.97% and food inflation was 13.75%.                                     |

## 6. Average Inflation Across Periods
I divided the 39 years into three periods and calculated the average inflation rate for each period.

| Period | Average Inflation |
|---|---:|
| 1987–1999 | 6.17% |
| 2000–2012 | 6.45% |
| 2013–2025 | 7.01% |

Based on the calculations from the dataset, I found that the 2013–2025 period had the highest average inflation rate among the three periods.

## 7. Inflation Volatility
I used standard deviation to compare how much the annual inflation rates varied within each period.
| Period | Standard Deviation |
|---|---:|
| 1987–1999 | 2.31 |
| 2000–2012 | 2.65 |
| 2013–2025 | 1.68 |

One interesting finding from my analysis is that the 2013-2025 period had the highest average inflation rate (7.01%) but the lowest volatility (SD = 1.68). This suggests that inflation was generally higher during this period. However, the annual inflation rates were more consistent and fluctuated less compared to the previous two periods.
However, the 2000-2012 period had the highest inflation volatility (SD = 2.65), indicating that inflation rates fluctuated more widely around the average during that period.

## 8. Consumer and Business Implications
Higher inflation can reduce the purchasing power of consumers because the same amount of money buys goods and services.
For businesses changing inflation can affect input costs, pricing decisions, budgeting, planning and profitability.
Periods of volatility can also make economic planning more difficult because prices change unpredictably.

## 9. Key Findings

* Overall average inflation from 1987 to 2025: **6.54%**
* Average inflation for 2013–2025: **7.01%**
* Highest inflation: **2011 — 11.40%**
* Lowest inflation: **2001 — 2.01%**
* Highest volatility: **2000–2012 — SD 2.65**




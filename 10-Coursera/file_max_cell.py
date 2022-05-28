import pandas as pd


def file_max_cell(file, col):
    df = pd.read_csv(file)
    df_score = df.sort_values(by=col)
    return df_score.loc[df_score.index[-1], col], df_score.iloc[-1]

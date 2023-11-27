def solution(data, ext, val_ext, sort_by):
    j_data = {'code': [], 'date': [], 'maximum': [], 'remain': []}

    for i in data:
        j_data['code'].append(i[0])
        j_data['date'].append(i[1])
        j_data['maximum'].append(i[2])
        j_data['remain'].append(i[3])

    filtered_data = {}
    for key in j_data:
        filtered_values = []
        for value, std in zip(j_data[key], j_data[ext]):
            if std < val_ext:
                filtered_values.append(value)
        filtered_data[key] = filtered_values
    sorted_data = sorted(
        zip(filtered_data['code'], filtered_data['date'], filtered_data['maximum'], filtered_data['remain']),
        key=lambda x: x[list(j_data.keys()).index(sort_by)]
    )
    answer = []
    for i in sorted_data:
        answer.append(list(i))
    return answer
def solution(book_time):
    book_time.sort(key=lambda x: x[0])
    rooms = []
    answer = 0
    for time_range in book_time:
        in_time, out_time = time_range
        available_room = None
        for room in rooms:
            if room < in_time:
                available_room = room
                break
        if available_room is not None:
            rooms.remove(available_room)
        else:
            answer += 1
        rooms.append(out_time)
    return answer
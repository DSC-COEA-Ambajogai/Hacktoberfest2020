import face_recognition as fr 
import cv2 

cap=cv2.VideoCapture()

known_image = fr.load_image_file('known/test.jpg')
known_encodings = fr.face_encodings(known_image)[0]

while (cap.isOpend()):
    ret,frame=cap.read()

    face_locations = fr.face_locations(frame)
    face_encodings = fr.face_encodings(frame,face_locations)

for face in face_encodings:
    result = fr.comapre_faces(known_encodings,face)

    True in result:
        index=result.index(True)
        print('known face found')









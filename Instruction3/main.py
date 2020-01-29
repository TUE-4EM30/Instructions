from pqlib import PriorityItem, PriorityQueue

#Initialize patients priority queue
patients = PriorityQueue

#Registering some patients
patients.put(PriorityItem('Patient 1', 2))
patients.put(PriorityItem('Patient 2', 5))
patients.put(PriorityItem('Patient 3', 3))
patients.put(PriorityItem('Patient 4', 5))
patients.put(PriorityItem('Patient 5', 8))
patients.put(PriorityItem('Patient 6', 9))
patients.put(PriorityItem('Patient 7', 1))
patients.put(PriorityItem('Patient 8', 4))

#The doctor receives the patients
while not patients.isEmpty():
    print("The doctor receives {}".format(patients.getPrio()))

//Grading students
vector<int> gradingStudents(vector<int> grades) {
    vector<int> finalgrade;
    for(int i = 0; i < grades.size(); i++) {
        if(grades[i] >= 38) {
            int nextMultipleOf5 = ((grades[i] / 5) + 1) * 5;
            if(nextMultipleOf5 - grades[i] < 3) {
                finalgrade.push_back(nextMultipleOf5);
            } else {
                finalgrade.push_back(grades[i]);
            }
        } else {
            finalgrade.push_back(grades[i]);
        }
    }
    return finalgrade;
}
//Apple and Orange

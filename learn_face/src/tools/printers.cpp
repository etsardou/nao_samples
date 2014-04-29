#include "tools/printers.h"

using namespace std;

void Printer::FaceDetected(AL::ALValue v)
{
  if(v.getSize() != 5)
  {
    return;
  }
  cout<<"--------------FaceDetected--------------\n";
  cout<<"Timestamp\n";
  cout<<"\tTimeStamp_Seconds = " << v[0][0] << "\n";
  cout<<"\tTimeStamp_Microseconds = " << v[0][1] << "\n";
  
  cout<<"CameraId = " << (int(v[4]) == 0 ? "Top" : "Bottom") << " camera \n";
  
  cout<<"Faces info\n";
  cout<<"\tShape info\n";
  cout<<"\t\tYaw = "<<v[1][0][0][1]<<", Pitch = "<<v[1][0][0][2]<<"\n";
  cout<<"\tExtra info\n";
  if(v[1][0][1].getSize() == 0)
  {
    cout<<"\t-\n";
  }
  else
  {
    cout<<"\t\tID = "<<v[1][0][1][0]<<"\n";
    cout<<"\t\tScore = "<<v[1][0][1][1]<<"\n";
    cout<<"\t\tFace = "<<v[1][0][1][2]<<"\n";
  }
}

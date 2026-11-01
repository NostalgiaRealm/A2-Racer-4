
/* ==== FUN_0050c150 @ 0050c150 ==== 
 * signature: undefined __stdcall FUN_0050c150(int * param_1)
 * body: 0050c150-0050c18e
 */

void FUN_0050c150(int *param_1)

{
  void *this;
  int unaff_ESI;
  int local_8 [2];
  
  (**(code **)(*param_1 + 4))(local_8);
  this = *(void **)(local_8[0] + 0x9c);
  FUN_0050abf0(*(void **)(unaff_ESI + 0x9c),(int)param_1);
  FUN_0050abf0(this,(int)param_1);
  return;
}



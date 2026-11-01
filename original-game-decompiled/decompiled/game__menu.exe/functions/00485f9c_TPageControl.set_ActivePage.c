
/* ==== TPageControl.set_ActivePage @ 00485f9c ==== 
 * signature: undefined __register TPageControl.set_ActivePage(int * param_1, int * param_2)
 * body: 00485f9c-00485fe1
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_ActivePage(int *param_1,int *param_2)

{
  WPARAM WVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == (int *)param_2[0x7d])) {
    FUN_00485a58(param_1,param_2);
    if (param_2 == (int *)0x0) {
      FUN_00484e98(param_1,0xffffffff);
    }
    else if (param_2 == (int *)param_1[0x91]) {
      WVar1 = FUN_004855fc((int)param_2);
      FUN_00484e98(param_1,WVar1);
    }
  }
  return;
}



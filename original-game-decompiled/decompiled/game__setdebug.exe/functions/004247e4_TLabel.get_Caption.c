
/* ==== TLabel.get_Caption @ 004247e4 ==== 
 * signature: undefined __register TLabel.get_Caption(int param_1, int * param_2)
 * body: 004247e4-00424812
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_get_Caption(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00424758(param_1);
  FUN_00403aa0(param_2,(undefined4 *)0x0,uVar1);
  if (uVar1 != 0) {
    FUN_00424768(param_1,*param_2,uVar1 + 1);
  }
  return;
}



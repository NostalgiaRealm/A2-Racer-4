
/* ==== FUN_00432f40 @ 00432f40 ==== 
 * signature: int __cdecl FUN_00432f40(int param_1, int param_2)
 * body: 00432f40-00433012
 */

int __cdecl FUN_00432f40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 * 5 + 10) * 4;
  FUN_004c5930(0,0,iVar2,&DAT_005989c8);
  iVar1 = FUN_004c5e40(0x26);
  if (iVar1 != 0) {
    FUN_00431ad0(0x26);
    FUN_004c5930(0,0,iVar2,&DAT_005989cc);
    param_2 = param_2 + -1;
    if (param_2 < 0) {
      param_2 = param_1 + -1;
    }
    iVar2 = (param_2 * 5 + 10) * 4;
    FUN_004c5930(0,0,iVar2,&DAT_005989d0);
  }
  iVar1 = FUN_004c5e40(0x28);
  if (iVar1 != 0) {
    FUN_00431ad0(0x28);
    FUN_004c5930(0,0,iVar2,&DAT_005989d4);
    param_2 = param_2 + 1;
    if (param_2 == param_1) {
      param_2 = 0;
    }
    FUN_004c5930(0,0,(param_2 * 5 + 10) * 4,&DAT_005989d8);
  }
  iVar1 = FUN_004c5e40(0x1b);
  if (iVar1 != 0) {
    FUN_00431ad0(0x1b);
    return -1;
  }
  return param_2;
}



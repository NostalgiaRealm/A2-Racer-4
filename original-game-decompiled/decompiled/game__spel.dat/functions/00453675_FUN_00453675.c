
/* ==== FUN_00453675 @ 00453675 ==== 
 * signature: undefined8 __fastcall FUN_00453675(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 00453675-004536ab
 */

undefined8 __fastcall FUN_00453675(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (DAT_005a2a58 == 1) {
    uVar1 = FUN_00469c60(&DAT_00712230,param_3);
    param_2 = (undefined4)((ulonglong)uVar1 >> 0x20);
    if ((char)uVar1 != '\0') {
      DAT_005a2a58 = 0;
    }
  }
  return CONCAT44(param_2,1);
}



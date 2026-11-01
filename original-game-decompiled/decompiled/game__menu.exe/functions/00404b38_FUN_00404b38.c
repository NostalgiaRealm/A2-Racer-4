
/* ==== FUN_00404b38 @ 00404b38 ==== 
 * signature: bool __register FUN_00404b38(undefined4 param_1, short * param_2, undefined4 param_3)
 * body: 00404b38-00404b4c
 */

bool FUN_00404b38(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x101) {
    FUN_00404acc(param_1,(undefined4 *)param_2,param_3);
  }
  return sVar1 == 0x101;
}



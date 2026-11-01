
/* ==== FUN_0050fd10 @ 0050fd10 ==== 
 * signature: undefined __fastcall FUN_0050fd10(int * param_1)
 * body: 0050fd10-0050fd35
 */

void __fastcall FUN_0050fd10(int *param_1)

{
  int iVar1;
  
  if ((param_1[1] & 3U) == 0) {
    param_1[1] = param_1[1] & 0xfffffffdU | 1;
    iVar1 = FUN_0050fd00((int)param_1);
    FUN_005001a0(*(void **)(iVar1 + 0xa0),param_1);
  }
  return;
}



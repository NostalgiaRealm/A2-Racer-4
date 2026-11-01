
/* ==== FUN_00402a2c @ 00402a2c ==== 
 * signature: undefined __register FUN_00402a2c(undefined4 * param_1, uint param_2, undefined1 param_3)
 * body: 00402a2c-00402a4a
 */

void FUN_00402a2c(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_2 >> 2;
  if (-1 < iVar1) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
      param_1 = param_1 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}



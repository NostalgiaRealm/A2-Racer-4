
/* ==== FUN_0043ff6c @ 0043ff6c ==== 
 * signature: undefined4 __register FUN_0043ff6c(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int * param_7)
 * body: 0043ff6c-0043ff9a
 */

undefined4
FUN_0043ff6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = FUN_00402ce4((int *)&DAT_00439694,'\x01',param_3);
  *(undefined4 *)(iVar1 + 4) = param_4;
  *(int *)(iVar1 + 8) = param_7[2];
  iVar1 = FUN_0040eec8(param_7,iVar1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



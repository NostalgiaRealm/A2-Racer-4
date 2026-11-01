
/* ==== FUN_0044aef4 @ 0044aef4 ==== 
 * signature: undefined4 __register FUN_0044aef4(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int * param_7)
 * body: 0044aef4-0044af22
 */

undefined4
FUN_0044aef4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = FUN_00402f6c((int *)&DAT_00443f60,'\x01',param_3);
  *(undefined4 *)(iVar1 + 4) = param_4;
  *(int *)(iVar1 + 8) = param_7[2];
  iVar1 = FUN_00410104(param_7,iVar1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



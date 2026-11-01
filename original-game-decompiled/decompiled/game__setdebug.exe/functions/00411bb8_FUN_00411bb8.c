
/* ==== FUN_00411bb8 @ 00411bb8 ==== 
 * signature: undefined __register FUN_00411bb8(int param_1)
 * body: 00411bb8-00411bf1
 */

void FUN_00411bb8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    piVar2 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446d34);
    FUN_0040346c(piVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



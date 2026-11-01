
/* ==== FUN_0041376c @ 0041376c ==== 
 * signature: undefined __register FUN_0041376c(int param_1)
 * body: 0041376c-004137a5
 */

void FUN_0041376c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    piVar2 = FUN_0040b694((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab99c);
    FUN_004036f4(piVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



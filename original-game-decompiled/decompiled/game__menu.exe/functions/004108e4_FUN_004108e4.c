
/* ==== FUN_004108e4 @ 004108e4 ==== 
 * signature: uint __register FUN_004108e4(int param_1, uint param_2)
 * body: 004108e4-004108f8
 */

uint FUN_004108e4(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 < *(uint *)(param_1 + 4)) {
    return -(uint)((*(byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3)) >> (param_2 & 7) & 1) !=
                  0) & 1;
  }
  piVar1 = FUN_0040b694((int *)&DAT_0040e89c,'\x01',(undefined4 *)PTR_PTR_004ab970);
  uVar2 = FUN_004036f4(piVar1);
  return uVar2;
}



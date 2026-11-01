
/* ==== FUN_004108b8 @ 004108b8 ==== 
 * signature: undefined __register FUN_004108b8(int param_1, uint param_2, char param_3)
 * body: 004108b8-004108e2
 */

void FUN_004108b8(int param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    if ((int)param_2 < 0) {
      piVar2 = FUN_0040b694((int *)&DAT_0040e89c,'\x01',(undefined4 *)PTR_PTR_004ab970);
      FUN_004036f4(piVar2);
      return;
    }
    FUN_00410814(param_1,param_2 + 1);
  }
  if (param_3 != '\0') {
    pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
    return;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 8) + ((int)param_2 >> 3));
  *pbVar1 = *pbVar1 & ~('\x01' << (param_2 & 7));
  return;
}



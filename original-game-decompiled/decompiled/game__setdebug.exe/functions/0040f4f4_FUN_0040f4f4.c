
/* ==== FUN_0040f4f4 @ 0040f4f4 ==== 
 * signature: undefined __register FUN_0040f4f4(int param_1, uint param_2, char param_3)
 * body: 0040f4f4-0040f51e
 */

void FUN_0040f4f4(int param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    if ((int)param_2 < 0) {
      piVar2 = FUN_0040a9f4((int *)&DAT_0040d7dc,'\x01',(undefined4 *)PTR_PTR_00446d0c);
      FUN_0040346c(piVar2);
      return;
    }
    FUN_0040f450(param_1,param_2 + 1);
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



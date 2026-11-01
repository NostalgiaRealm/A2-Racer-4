
/* ==== FUN_0044b74c @ 0044b74c ==== 
 * signature: uint __register FUN_0044b74c(int param_1, int param_2, char param_3)
 * body: 0044b74c-0044b7aa
 */

uint FUN_0044b74c(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_3 == '\x01') {
    uVar1 = (uint)(*(int *)(param_1 + 0x34) < *(int *)(param_2 + 0x34));
  }
  else if (param_3 == '\x02') {
    iVar2 = *(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x3c);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 < *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c));
  }
  else if (param_3 == '\x03') {
    uVar1 = (uint)(*(int *)(param_1 + 0x30) < *(int *)(param_2 + 0x30));
  }
  else if (param_3 == '\x04') {
    iVar2 = *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x38);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 < *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38));
  }
  return uVar1;
}




/* ==== FUN_00454bd0 @ 00454bd0 ==== 
 * signature: int __register FUN_00454bd0(uint param_1)
 * body: 00454bd0-00454c00
 */

int FUN_00454bd0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while ((iVar1 < 0x1f && ((1 << ((byte)iVar1 & 0x1f) & param_1) == 0))) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = 0;
  while ((1 << ((byte)iVar1 & 0x1f) & param_1) != 0) {
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



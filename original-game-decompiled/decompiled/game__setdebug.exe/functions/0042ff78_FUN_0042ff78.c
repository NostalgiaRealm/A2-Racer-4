
/* ==== FUN_0042ff78 @ 0042ff78 ==== 
 * signature: int __register FUN_0042ff78(uint param_1)
 * body: 0042ff78-0042ff95
 */

int FUN_0042ff78(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004160cc(param_1);
  if (iVar1 == 0x1fffffff) {
    return -1;
  }
  if (iVar1 == 0x20000000) {
    iVar1 = -0x1000000;
  }
  return iVar1;
}



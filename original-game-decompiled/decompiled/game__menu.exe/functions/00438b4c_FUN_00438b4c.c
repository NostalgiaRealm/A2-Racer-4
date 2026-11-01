
/* ==== FUN_00438b4c @ 00438b4c ==== 
 * signature: undefined __register FUN_00438b4c(int param_1)
 * body: 00438b4c-00438b64
 */

void FUN_00438b4c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)PTR_DAT_004ab760)();
  *(bool *)(param_1 + 0xc) = iVar1 != 0;
  return;
}



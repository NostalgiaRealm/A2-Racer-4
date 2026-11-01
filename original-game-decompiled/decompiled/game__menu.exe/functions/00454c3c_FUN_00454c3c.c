
/* ==== FUN_00454c3c @ 00454c3c ==== 
 * signature: undefined __register FUN_00454c3c(undefined1 * param_1)
 * body: 00454c3c-00454c62
 */

void FUN_00454c3c(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = (undefined1)iVar2;
    param_1[2] = uVar1;
    param_1[1] = uVar1;
    *param_1 = uVar1;
    param_1[3] = 0;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 != 0x100);
  return;
}



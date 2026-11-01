
/* ==== FUN_00403a7c @ 00403a7c ==== 
 * signature: undefined4 * __register FUN_00403a7c(int param_1)
 * body: 00403a7c-00403a9e
 */

undefined4 * FUN_00403a7c(int param_1)

{
  undefined4 *puVar1;
  
  if (0 < param_1) {
    puVar1 = (undefined4 *)FUN_004026b8(param_1 + 9);
    puVar1[1] = param_1;
    *puVar1 = 1;
    *(undefined1 *)((int)(puVar1 + 2) + param_1) = 0;
    return puVar1 + 2;
  }
  return (undefined4 *)0x0;
}



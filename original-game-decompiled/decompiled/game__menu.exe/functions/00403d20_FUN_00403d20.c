
/* ==== FUN_00403d20 @ 00403d20 ==== 
 * signature: undefined4 * __register FUN_00403d20(int param_1)
 * body: 00403d20-00403d42
 */

undefined4 * FUN_00403d20(int param_1)

{
  undefined4 *puVar1;
  
  if (0 < param_1) {
    puVar1 = (undefined4 *)FUN_0040277c(param_1 + 9);
    puVar1[1] = param_1;
    *puVar1 = 1;
    *(undefined1 *)((int)(puVar1 + 2) + param_1) = 0;
    return puVar1 + 2;
  }
  return (undefined4 *)0x0;
}



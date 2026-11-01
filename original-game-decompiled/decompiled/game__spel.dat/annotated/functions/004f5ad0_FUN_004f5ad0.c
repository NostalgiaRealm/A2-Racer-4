
/* ==== FUN_004f5ad0 @ 004f5ad0 ==== 
 * signature: undefined __cdecl FUN_004f5ad0(int param_1, int param_2)
 * body: 004f5ad0-004f5afa
 */

void __cdecl FUN_004f5ad0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004f5a90(param_1 + 8 + param_2);
  *puVar1 = 0x65981234;
  *(undefined4 **)(((int)puVar1 + param_2 + 7 & -param_2) - 4) = puVar1;
  return;
}



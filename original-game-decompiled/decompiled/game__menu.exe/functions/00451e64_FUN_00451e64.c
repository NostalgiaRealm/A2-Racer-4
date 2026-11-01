
/* ==== FUN_00451e64 @ 00451e64 ==== 
 * signature: undefined __register FUN_00451e64(int param_1)
 * body: 00451e64-00451e89
 */

void FUN_00451e64(int param_1)

{
  while (*(int *)(param_1 + 0xc) != 0) {
    FUN_004521c0(param_1);
  }
  if (*(HGLOBAL *)(param_1 + 8) != (HGLOBAL)0x0) {
    FreeResource(*(HGLOBAL *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




/* ==== FUN_0046fbf4 @ 0046fbf4 ==== 
 * signature: undefined __register FUN_0046fbf4(int param_1)
 * body: 0046fbf4-0046fc10
 */

void FUN_0046fbf4(int param_1)

{
  if (*(HGLOBAL *)(param_1 + 0x1fc) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(param_1 + 0x1fc));
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  return;
}



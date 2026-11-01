
/* ==== FUN_00441564 @ 00441564 ==== 
 * signature: undefined4 __register FUN_00441564(int param_1, int * param_2)
 * body: 00441564-004415b2
 */

undefined4 FUN_00441564(int param_1,int *param_2)

{
  if (*param_2 == 0x1a) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      SetThreadLocale(0x400);
      FUN_0040b66c();
    }
    if (*(char *)(param_1 + 0x4a) != '\0') {
      FUN_004406c8(DAT_004477c8);
      if (*(char *)(param_1 + 0x78) != '\0') {
        FUN_00442688(param_1,'\0');
        FUN_00442688(param_1,'\x01');
      }
    }
  }
  return 0;
}



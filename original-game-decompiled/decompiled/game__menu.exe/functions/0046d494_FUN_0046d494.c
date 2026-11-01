
/* ==== FUN_0046d494 @ 0046d494 ==== 
 * signature: undefined FUN_0046d494(void)
 * body: 0046d494-0046d4e0
 */

void FUN_0046d494(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int *piVar2;
  int *unaff_ESI;
  undefined2 in_CS;
  byte in_CF;
  int iStack_8;
  
  bVar1 = *param_3;
  *param_3 = bVar1 << 1 | in_CF;
  iStack_8 = CONCAT22(iStack_8._2_2_,in_CS);
  *(int *)(iStack_8 + 0x56) = *(int *)(iStack_8 + 0x56) + -0x27740d75 + (uint)((bVar1 & 0x80) != 0);
  if (*(int *)(iStack_8 + 0x10) == 0) {
    piVar2 = FUN_0046dd40((int *)&PTR_TCustomAdapter_vmt_000_0046d31c,'\x01',iStack_8);
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + 9;
    }
    FUN_00405878((int *)(iStack_8 + 0x10),piVar2);
  }
  FUN_00405894(unaff_ESI,*(undefined4 **)(iStack_8 + 0x10));
  return;
}



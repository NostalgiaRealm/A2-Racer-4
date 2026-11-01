
/* ==== FUN_00430e10 @ 00430e10 ==== 
 * signature: undefined __fastcall FUN_00430e10(int * param_1)
 * body: 00430e10-00430e95
 */

void __fastcall FUN_00430e10(int *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  int iVar3;
  
  iVar3 = 0;
  this = (void *)(DAT_00715e50 + *param_1 * 0xf0);
  if (0 < *(int *)((int)this + 0xac)) {
    do {
      if (DAT_006fb940 != 0) {
        iVar2 = FUN_004a8600(this,iVar3);
        iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + 0xa5 + iVar2 * 0xa8);
        if ((iVar1 != 2) && (iVar1 != 1)) {
          *(undefined4 *)(DAT_0073b0d0 + iVar2 + 0xa5 + iVar2 * 0xa8) = 3;
        }
      }
      iVar3 = iVar3 + 1;
      this = (void *)(*param_1 * 0xf0 + DAT_00715e50);
    } while (iVar3 < *(int *)(*param_1 * 0xf0 + 0xac + DAT_00715e50));
  }
  return;
}



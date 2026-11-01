
/* ==== FUN_00426fe0 @ 00426fe0 ==== 
 * signature: undefined __thiscall FUN_00426fe0(void * this, int param_1, int param_2, float param_3, undefined4 param_4, char param_5)
 * body: 00426fe0-0042710b
 */

void __thiscall
FUN_00426fe0(void *this,int param_1,int param_2,float param_3,undefined4 param_4,char param_5)

{
  undefined4 *this_00;
  int iVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    this_00 = (undefined4 *)((int)this + iVar3 * 0x14 + 0x10);
    iVar1 = FUN_00425230(this_00);
    if (iVar1 == param_1) {
      if ((param_1 != DAT_006fba58) ||
         (((DAT_006fbde2 == '\0' && (DAT_006fb8a0 == 0)) && (DAT_006fb96c == 0)))) {
        DVar2 = GetTickCount();
        if (DVar2 - *(int *)(iVar3 * 0x10 + 0xde6b4 + (int)this) < 0x3c) {
          param_3 = 0.0;
        }
        FUN_00425310(this_00,param_3);
        FUN_00426270();
      }
      if (param_2 == 1) {
        FUN_00426880(this,iVar3,param_3,param_4);
        FUN_00426a60();
LAB_004270dc:
        FUN_00427400(this,param_1,iVar3,param_3,param_5);
      }
      else {
        if (param_2 == 3) {
          FUN_004269c0(this,iVar3,param_3,param_4);
          FUN_00426a80();
          goto LAB_004270dc;
        }
        if (param_2 == 4) {
          FUN_00426920(this,iVar3,param_3,param_4);
          FUN_00426a70();
        }
      }
      DVar2 = GetTickCount();
      *(DWORD *)(iVar3 * 0x10 + 0xde6b4 + (int)this) = DVar2;
      iVar3 = 0xfa;
    }
    iVar3 = iVar3 + 1;
    if (0xf9 < iVar3) {
      return;
    }
  } while( true );
}



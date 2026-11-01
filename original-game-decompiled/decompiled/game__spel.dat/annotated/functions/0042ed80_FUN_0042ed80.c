
/* ==== FUN_0042ed80 @ 0042ed80 ==== 
 * signature: undefined __thiscall FUN_0042ed80(void * this, LPCSTR param_1)
 * body: 0042ed80-0042edd8
 */

void __thiscall FUN_0042ed80(void *this,LPCSTR param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  CHAR local_20 [32];
  
  pCVar1 = param_1;
  iVar2 = 0;
  if (0 < *(int *)this) {
    do {
      FUN_005587a3(local_20,PTR_s_MaxSpeedGear_d_005976cc);
      param_1 = (LPCSTR)read_ini_value_setting(pCVar1,local_20);
      FUN_004a5620(*(void **)((int)this + 0x5c),
                   *(undefined4 **)((int)*(void **)((int)this + 0x5c) + 8),1,&param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)this);
  }
  return;
}



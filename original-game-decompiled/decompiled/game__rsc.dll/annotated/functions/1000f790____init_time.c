
/* ==== ___init_time @ 1000f790 ==== 
 * signature: int __cdecl ___init_time(threadlocinfo * _LocInfo)
 * body: 1000f790-1000f86a
 * note: Library Function - Single Match  ___init_time  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_10031648 == 0) {
    PTR_PTR_10030ca8 = (undefined *)&PTR_DAT_10030cb0;
    ___free_lc_time(DAT_10031664);
    FUN_100041a0(DAT_10031664,2);
    DAT_10031664 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_1000f870(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_10030ca8 = (undefined *)piVar1;
        ___free_lc_time(DAT_10031664);
        FUN_100041a0(DAT_10031664,2);
        iVar2 = 0;
        DAT_10031664 = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        FUN_100041a0(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



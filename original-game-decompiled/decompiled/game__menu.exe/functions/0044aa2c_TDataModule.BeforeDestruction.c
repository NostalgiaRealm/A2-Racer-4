
/* ==== TDataModule.BeforeDestruction @ 0044aa2c ==== 
 * signature: undefined __register TDataModule.BeforeDestruction(int * param_1)
 * body: 0044aa2c-0044aa59
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDataModule_BeforeDestruction(int *param_1)

{
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  FUN_0041581c((int)param_1);
  FUN_0041316c((int)param_1,(char *)0x0);
  if ((char)param_1[0x12] == '\0') {
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}



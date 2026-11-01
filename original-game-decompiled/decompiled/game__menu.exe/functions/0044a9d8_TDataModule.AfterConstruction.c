
/* ==== TDataModule.AfterConstruction @ 0044a9d8 ==== 
 * signature: undefined TDataModule.AfterConstruction(void)
 * body: 0044a9d8-0044a9e3
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TDataModule_AfterConstruction(int *param_1)

{
  if ((char)param_1[0x12] == '\0') {
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}



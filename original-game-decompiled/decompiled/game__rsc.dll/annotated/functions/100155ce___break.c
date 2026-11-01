
/* ==== __break @ 100155ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 100155ce-100155ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



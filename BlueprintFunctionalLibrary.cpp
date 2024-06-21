void UAssetBPLibrary::ChangeCollisionPreset(UStaticMesh* StaticMesh)
{
 //Get the static mesh data


 //Get the Body Setup
 UBodySetup* BodySetup = StaticMesh->GetBodySetup();
 if (BodySetup)
 {
  //set collision state
  BodySetup->CollisionTraceFlag = ECollisionTraceFlag::CTF_UseDefault;
  BodySetup->DefaultInstance.SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

  //Make dirty
  StaticMesh->MarkPackageDirty();

  //Checkout Asset
 }
}

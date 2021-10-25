//
//  OpenSCENARIO.cxx
//  Created by Javed Shaik on Mon Jan 18 21:29:49 2021
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 78a6864d-cfec-4801-8799-10eb4b8ed2f2 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
#include "xosc.h"
Boolean::Boolean(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_boolean = attr.as_bool(); 
}
void Boolean::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_boolean).c_str(); }   
}
DateTime::DateTime(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_dateTime = attr.as_string(); 
}
void DateTime::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_dateTime).c_str(); }   
}
Double::Double(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_double = attr.as_double(); 
}
void Double::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_double).c_str(); }   
}
Int::Int(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_int = attr.as_int(); 
}
void Int::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_int).c_str(); }   
}
String::String(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_string = attr.as_string(); 
}
void String::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_string).c_str(); }   
}
UnsignedInt::UnsignedInt(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_unsignedInt = attr.as_ullong(); 
}
void UnsignedInt::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_unsignedInt).c_str(); }   
}
UnsignedShort::UnsignedShort(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_unsignedShort = attr.as_ullong(); 
}
void UnsignedShort::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_unsignedShort).c_str(); }   
}
CloudState::CloudState(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_CloudState>(attr.as_string())) { cloudState = str2enum<e_CloudState>(attr.as_string()); }
}
void CloudState::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_CloudState>(cloudState)) attr = enum2str<e_CloudState>(cloudState).c_str();  
}
ConditionEdge::ConditionEdge(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ConditionEdge>(attr.as_string())) { conditionEdge = str2enum<e_ConditionEdge>(attr.as_string()); }
}
void ConditionEdge::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ConditionEdge>(conditionEdge)) attr = enum2str<e_ConditionEdge>(conditionEdge).c_str();  
}
DynamicsDimension::DynamicsDimension(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_DynamicsDimension>(attr.as_string())) { dynamicsDimension = str2enum<e_DynamicsDimension>(attr.as_string()); }
}
void DynamicsDimension::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_DynamicsDimension>(dynamicsDimension)) attr = enum2str<e_DynamicsDimension>(dynamicsDimension).c_str();  
}
DynamicsShape::DynamicsShape(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_DynamicsShape>(attr.as_string())) { dynamicsShape = str2enum<e_DynamicsShape>(attr.as_string()); }
}
void DynamicsShape::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_DynamicsShape>(dynamicsShape)) attr = enum2str<e_DynamicsShape>(dynamicsShape).c_str();  
}
FollowingMode::FollowingMode(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_FollowingMode>(attr.as_string())) { followingMode = str2enum<e_FollowingMode>(attr.as_string()); }
}
void FollowingMode::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_FollowingMode>(followingMode)) attr = enum2str<e_FollowingMode>(followingMode).c_str();  
}
MiscObjectCategory::MiscObjectCategory(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_MiscObjectCategory>(attr.as_string())) { miscObjectCategory = str2enum<e_MiscObjectCategory>(attr.as_string()); }
}
void MiscObjectCategory::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_MiscObjectCategory>(miscObjectCategory)) attr = enum2str<e_MiscObjectCategory>(miscObjectCategory).c_str();  
}
ObjectType::ObjectType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ObjectType>(attr.as_string())) { objectType = str2enum<e_ObjectType>(attr.as_string()); }
}
void ObjectType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ObjectType>(objectType)) attr = enum2str<e_ObjectType>(objectType).c_str();  
}
ParameterType::ParameterType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ParameterType>(attr.as_string())) { parameterType = str2enum<e_ParameterType>(attr.as_string()); }
}
void ParameterType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ParameterType>(parameterType)) attr = enum2str<e_ParameterType>(parameterType).c_str();  
}
PedestrianCategory::PedestrianCategory(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_PedestrianCategory>(attr.as_string())) { pedestrianCategory = str2enum<e_PedestrianCategory>(attr.as_string()); }
}
void PedestrianCategory::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_PedestrianCategory>(pedestrianCategory)) attr = enum2str<e_PedestrianCategory>(pedestrianCategory).c_str();  
}
PrecipitationType::PrecipitationType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_PrecipitationType>(attr.as_string())) { precipitationType = str2enum<e_PrecipitationType>(attr.as_string()); }
}
void PrecipitationType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_PrecipitationType>(precipitationType)) attr = enum2str<e_PrecipitationType>(precipitationType).c_str();  
}
Priority::Priority(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_Priority>(attr.as_string())) { priority = str2enum<e_Priority>(attr.as_string()); }
}
void Priority::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_Priority>(priority)) attr = enum2str<e_Priority>(priority).c_str();  
}
ReferenceContext::ReferenceContext(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ReferenceContext>(attr.as_string())) { referenceContext = str2enum<e_ReferenceContext>(attr.as_string()); }
}
void ReferenceContext::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ReferenceContext>(referenceContext)) attr = enum2str<e_ReferenceContext>(referenceContext).c_str();  
}
RelativeDistanceType::RelativeDistanceType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_RelativeDistanceType>(attr.as_string())) { relativeDistanceType = str2enum<e_RelativeDistanceType>(attr.as_string()); }
}
void RelativeDistanceType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_RelativeDistanceType>(relativeDistanceType)) attr = enum2str<e_RelativeDistanceType>(relativeDistanceType).c_str();  
}
RouteStrategy::RouteStrategy(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_RouteStrategy>(attr.as_string())) { routeStrategy = str2enum<e_RouteStrategy>(attr.as_string()); }
}
void RouteStrategy::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_RouteStrategy>(routeStrategy)) attr = enum2str<e_RouteStrategy>(routeStrategy).c_str();  
}
Rule::Rule(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_Rule>(attr.as_string())) { rule = str2enum<e_Rule>(attr.as_string()); }
}
void Rule::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_Rule>(rule)) attr = enum2str<e_Rule>(rule).c_str();  
}
SpeedTargetValueType::SpeedTargetValueType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_SpeedTargetValueType>(attr.as_string())) { speedTargetValueType = str2enum<e_SpeedTargetValueType>(attr.as_string()); }
}
void SpeedTargetValueType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_SpeedTargetValueType>(speedTargetValueType)) attr = enum2str<e_SpeedTargetValueType>(speedTargetValueType).c_str();  
}
StoryboardElementState::StoryboardElementState(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_StoryboardElementState>(attr.as_string())) { storyboardElementState = str2enum<e_StoryboardElementState>(attr.as_string()); }
}
void StoryboardElementState::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_StoryboardElementState>(storyboardElementState)) attr = enum2str<e_StoryboardElementState>(storyboardElementState).c_str();  
}
StoryboardElementType::StoryboardElementType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_StoryboardElementType>(attr.as_string())) { storyboardElementType = str2enum<e_StoryboardElementType>(attr.as_string()); }
}
void StoryboardElementType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_StoryboardElementType>(storyboardElementType)) attr = enum2str<e_StoryboardElementType>(storyboardElementType).c_str();  
}
TriggeringEntitiesRule::TriggeringEntitiesRule(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_TriggeringEntitiesRule>(attr.as_string())) { triggeringEntitiesRule = str2enum<e_TriggeringEntitiesRule>(attr.as_string()); }
}
void TriggeringEntitiesRule::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_TriggeringEntitiesRule>(triggeringEntitiesRule)) attr = enum2str<e_TriggeringEntitiesRule>(triggeringEntitiesRule).c_str();  
}
VehicleCategory::VehicleCategory(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_VehicleCategory>(attr.as_string())) { vehicleCategory = str2enum<e_VehicleCategory>(attr.as_string()); }
}
void VehicleCategory::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_VehicleCategory>(vehicleCategory)) attr = enum2str<e_VehicleCategory>(vehicleCategory).c_str();  
}
Action_U::Action_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"GlobalAction")==0) { m_GlobalAction = std::make_shared<GlobalAction>(node); }  
    if (strcmp(node.name(),"UserDefinedAction")==0) { m_UserDefinedAction = std::make_shared<UserDefinedAction>(node); }  
    if (strcmp(node.name(),"PrivateAction")==0) { m_PrivateAction = std::make_shared<PrivateAction>(node); }  
}
void Action_U::save(pugi::xml_node node)
{
    if ( m_GlobalAction ) { m_GlobalAction->save(node.append_child("GlobalAction")); }  
    if ( m_UserDefinedAction ) { m_UserDefinedAction->save(node.append_child("UserDefinedAction")); }  
    if ( m_PrivateAction ) { m_PrivateAction->save(node.append_child("PrivateAction")); }  
}
AssignControllerAction_U::AssignControllerAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void AssignControllerAction_U::save(pugi::xml_node node)
{
    if ( m_Controller ) { m_Controller->save(node.append_child("Controller")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
AssignRouteAction_U::AssignRouteAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Route")==0) { m_Route = std::make_shared<Route>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void AssignRouteAction_U::save(pugi::xml_node node)
{
    if ( m_Route ) { m_Route->save(node.append_child("Route")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
ByValueCondition_U::ByValueCondition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"ParameterCondition")==0) { m_ParameterCondition = std::make_shared<ParameterCondition>(node); }  
    if (strcmp(node.name(),"TimeOfDayCondition")==0) { m_TimeOfDayCondition = std::make_shared<TimeOfDayCondition>(node); }  
    if (strcmp(node.name(),"SimulationTimeCondition")==0) { m_SimulationTimeCondition = std::make_shared<SimulationTimeCondition>(node); }  
    if (strcmp(node.name(),"StoryboardElementStateCondition")==0) { m_StoryboardElementStateCondition = std::make_shared<StoryboardElementStateCondition>(node); }  
    if (strcmp(node.name(),"UserDefinedValueCondition")==0) { m_UserDefinedValueCondition = std::make_shared<UserDefinedValueCondition>(node); }  
    if (strcmp(node.name(),"TrafficSignalCondition")==0) { m_TrafficSignalCondition = std::make_shared<TrafficSignalCondition>(node); }  
    if (strcmp(node.name(),"TrafficSignalControllerCondition")==0) { m_TrafficSignalControllerCondition = std::make_shared<TrafficSignalControllerCondition>(node); }  
}
void ByValueCondition_U::save(pugi::xml_node node)
{
    if ( m_ParameterCondition ) { m_ParameterCondition->save(node.append_child("ParameterCondition")); }  
    if ( m_TimeOfDayCondition ) { m_TimeOfDayCondition->save(node.append_child("TimeOfDayCondition")); }  
    if ( m_SimulationTimeCondition ) { m_SimulationTimeCondition->save(node.append_child("SimulationTimeCondition")); }  
    if ( m_StoryboardElementStateCondition ) { m_StoryboardElementStateCondition->save(node.append_child("StoryboardElementStateCondition")); }  
    if ( m_UserDefinedValueCondition ) { m_UserDefinedValueCondition->save(node.append_child("UserDefinedValueCondition")); }  
    if ( m_TrafficSignalCondition ) { m_TrafficSignalCondition->save(node.append_child("TrafficSignalCondition")); }  
    if ( m_TrafficSignalControllerCondition ) { m_TrafficSignalControllerCondition->save(node.append_child("TrafficSignalControllerCondition")); }  
}
CollisionCondition_U::CollisionCondition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"EntityRef")==0) { m_EntityRef = std::make_shared<EntityRef>(node); }  
    if (strcmp(node.name(),"ByType")==0) { m_ByType = std::make_shared<ByObjectType>(node); }  
}
void CollisionCondition_U::save(pugi::xml_node node)
{
    if ( m_EntityRef ) { m_EntityRef->save(node.append_child("EntityRef")); }  
    if ( m_ByType ) { m_ByType->save(node.append_child("ByType")); }  
}
Condition_U::Condition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"ByEntityCondition")==0) { m_ByEntityCondition = std::make_shared<ByEntityCondition>(node); }  
    if (strcmp(node.name(),"ByValueCondition")==0) { m_ByValueCondition = std::make_shared<ByValueCondition>(node); }  
}
void Condition_U::save(pugi::xml_node node)
{
    if ( m_ByEntityCondition ) { m_ByEntityCondition->save(node.append_child("ByEntityCondition")); }  
    if ( m_ByValueCondition ) { m_ByValueCondition->save(node.append_child("ByValueCondition")); }  
}
ControllerDistributionEntry_U::ControllerDistributionEntry_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void ControllerDistributionEntry_U::save(pugi::xml_node node)
{
    if ( m_Controller ) { m_Controller->save(node.append_child("Controller")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
EntityAction_U::EntityAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AddEntityAction")==0) { m_AddEntityAction = std::make_shared<AddEntityAction>(node); }  
    if (strcmp(node.name(),"DeleteEntityAction")==0) { m_DeleteEntityAction = std::make_shared<DeleteEntityAction>(node); }  
}
void EntityAction_U::save(pugi::xml_node node)
{
    if ( m_AddEntityAction ) { m_AddEntityAction->save(node.append_child("AddEntityAction")); }  
    if ( m_DeleteEntityAction ) { m_DeleteEntityAction->save(node.append_child("DeleteEntityAction")); }  
}
EntityCondition_U::EntityCondition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"EndOfRoadCondition")==0) { m_EndOfRoadCondition = std::make_shared<EndOfRoadCondition>(node); }  
    if (strcmp(node.name(),"CollisionCondition")==0) { m_CollisionCondition = std::make_shared<CollisionCondition>(node); }  
    if (strcmp(node.name(),"OffroadCondition")==0) { m_OffroadCondition = std::make_shared<OffroadCondition>(node); }  
    if (strcmp(node.name(),"TimeHeadwayCondition")==0) { m_TimeHeadwayCondition = std::make_shared<TimeHeadwayCondition>(node); }  
    if (strcmp(node.name(),"TimeToCollisionCondition")==0) { m_TimeToCollisionCondition = std::make_shared<TimeToCollisionCondition>(node); }  
    if (strcmp(node.name(),"AccelerationCondition")==0) { m_AccelerationCondition = std::make_shared<AccelerationCondition>(node); }  
    if (strcmp(node.name(),"StandStillCondition")==0) { m_StandStillCondition = std::make_shared<StandStillCondition>(node); }  
    if (strcmp(node.name(),"SpeedCondition")==0) { m_SpeedCondition = std::make_shared<SpeedCondition>(node); }  
    if (strcmp(node.name(),"RelativeSpeedCondition")==0) { m_RelativeSpeedCondition = std::make_shared<RelativeSpeedCondition>(node); }  
    if (strcmp(node.name(),"TraveledDistanceCondition")==0) { m_TraveledDistanceCondition = std::make_shared<TraveledDistanceCondition>(node); }  
    if (strcmp(node.name(),"ReachPositionCondition")==0) { m_ReachPositionCondition = std::make_shared<ReachPositionCondition>(node); }  
    if (strcmp(node.name(),"DistanceCondition")==0) { m_DistanceCondition = std::make_shared<DistanceCondition>(node); }  
    if (strcmp(node.name(),"RelativeDistanceCondition")==0) { m_RelativeDistanceCondition = std::make_shared<RelativeDistanceCondition>(node); }  
}
void EntityCondition_U::save(pugi::xml_node node)
{
    if ( m_EndOfRoadCondition ) { m_EndOfRoadCondition->save(node.append_child("EndOfRoadCondition")); }  
    if ( m_CollisionCondition ) { m_CollisionCondition->save(node.append_child("CollisionCondition")); }  
    if ( m_OffroadCondition ) { m_OffroadCondition->save(node.append_child("OffroadCondition")); }  
    if ( m_TimeHeadwayCondition ) { m_TimeHeadwayCondition->save(node.append_child("TimeHeadwayCondition")); }  
    if ( m_TimeToCollisionCondition ) { m_TimeToCollisionCondition->save(node.append_child("TimeToCollisionCondition")); }  
    if ( m_AccelerationCondition ) { m_AccelerationCondition->save(node.append_child("AccelerationCondition")); }  
    if ( m_StandStillCondition ) { m_StandStillCondition->save(node.append_child("StandStillCondition")); }  
    if ( m_SpeedCondition ) { m_SpeedCondition->save(node.append_child("SpeedCondition")); }  
    if ( m_RelativeSpeedCondition ) { m_RelativeSpeedCondition->save(node.append_child("RelativeSpeedCondition")); }  
    if ( m_TraveledDistanceCondition ) { m_TraveledDistanceCondition->save(node.append_child("TraveledDistanceCondition")); }  
    if ( m_ReachPositionCondition ) { m_ReachPositionCondition->save(node.append_child("ReachPositionCondition")); }  
    if ( m_DistanceCondition ) { m_DistanceCondition->save(node.append_child("DistanceCondition")); }  
    if ( m_RelativeDistanceCondition ) { m_RelativeDistanceCondition->save(node.append_child("RelativeDistanceCondition")); }  
}
EnvironmentAction_U::EnvironmentAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Environment")==0) { m_Environment = std::make_shared<Environment>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void EnvironmentAction_U::save(pugi::xml_node node)
{
    if ( m_Environment ) { m_Environment->save(node.append_child("Environment")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
FinalSpeed_U::FinalSpeed_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AbsoluteSpeed")==0) { m_AbsoluteSpeed = std::make_shared<AbsoluteSpeed>(node); }  
    if (strcmp(node.name(),"RelativeSpeedToMaster")==0) { m_RelativeSpeedToMaster = std::make_shared<RelativeSpeedToMaster>(node); }  
}
void FinalSpeed_U::save(pugi::xml_node node)
{
    if ( m_AbsoluteSpeed ) { m_AbsoluteSpeed->save(node.append_child("AbsoluteSpeed")); }  
    if ( m_RelativeSpeedToMaster ) { m_RelativeSpeedToMaster->save(node.append_child("RelativeSpeedToMaster")); }  
}
GlobalAction_U::GlobalAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"EnvironmentAction")==0) { m_EnvironmentAction = std::make_shared<EnvironmentAction>(node); }  
    if (strcmp(node.name(),"EntityAction")==0) { m_EntityAction = std::make_shared<EntityAction>(node); }  
    if (strcmp(node.name(),"ParameterAction")==0) { m_ParameterAction = std::make_shared<ParameterAction>(node); }  
    if (strcmp(node.name(),"InfrastructureAction")==0) { m_InfrastructureAction = std::make_shared<InfrastructureAction>(node); }  
    if (strcmp(node.name(),"TrafficAction")==0) { m_TrafficAction = std::make_shared<TrafficAction>(node); }  
}
void GlobalAction_U::save(pugi::xml_node node)
{
    if ( m_EnvironmentAction ) { m_EnvironmentAction->save(node.append_child("EnvironmentAction")); }  
    if ( m_EntityAction ) { m_EntityAction->save(node.append_child("EntityAction")); }  
    if ( m_ParameterAction ) { m_ParameterAction->save(node.append_child("ParameterAction")); }  
    if ( m_InfrastructureAction ) { m_InfrastructureAction->save(node.append_child("InfrastructureAction")); }  
    if ( m_TrafficAction ) { m_TrafficAction->save(node.append_child("TrafficAction")); }  
}
InRoutePosition_U::InRoutePosition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"FromCurrentEntity")==0) { m_FromCurrentEntity = std::make_shared<PositionOfCurrentEntity>(node); }  
    if (strcmp(node.name(),"FromRoadCoordinates")==0) { m_FromRoadCoordinates = std::make_shared<PositionInRoadCoordinates>(node); }  
    if (strcmp(node.name(),"FromLaneCoordinates")==0) { m_FromLaneCoordinates = std::make_shared<PositionInLaneCoordinates>(node); }  
}
void InRoutePosition_U::save(pugi::xml_node node)
{
    if ( m_FromCurrentEntity ) { m_FromCurrentEntity->save(node.append_child("FromCurrentEntity")); }  
    if ( m_FromRoadCoordinates ) { m_FromRoadCoordinates->save(node.append_child("FromRoadCoordinates")); }  
    if ( m_FromLaneCoordinates ) { m_FromLaneCoordinates->save(node.append_child("FromLaneCoordinates")); }  
}
LaneChangeTarget_U::LaneChangeTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"RelativeTargetLane")==0) { m_RelativeTargetLane = std::make_shared<RelativeTargetLane>(node); }  
    if (strcmp(node.name(),"AbsoluteTargetLane")==0) { m_AbsoluteTargetLane = std::make_shared<AbsoluteTargetLane>(node); }  
}
void LaneChangeTarget_U::save(pugi::xml_node node)
{
    if ( m_RelativeTargetLane ) { m_RelativeTargetLane->save(node.append_child("RelativeTargetLane")); }  
    if ( m_AbsoluteTargetLane ) { m_AbsoluteTargetLane->save(node.append_child("AbsoluteTargetLane")); }  
}
LaneOffsetTarget_U::LaneOffsetTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"RelativeTargetLaneOffset")==0) { m_RelativeTargetLaneOffset = std::make_shared<RelativeTargetLaneOffset>(node); }  
    if (strcmp(node.name(),"AbsoluteTargetLaneOffset")==0) { m_AbsoluteTargetLaneOffset = std::make_shared<AbsoluteTargetLaneOffset>(node); }  
}
void LaneOffsetTarget_U::save(pugi::xml_node node)
{
    if ( m_RelativeTargetLaneOffset ) { m_RelativeTargetLaneOffset->save(node.append_child("RelativeTargetLaneOffset")); }  
    if ( m_AbsoluteTargetLaneOffset ) { m_AbsoluteTargetLaneOffset->save(node.append_child("AbsoluteTargetLaneOffset")); }  
}
LateralAction_U::LateralAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"LaneChangeAction")==0) { m_LaneChangeAction = std::make_shared<LaneChangeAction>(node); }  
    if (strcmp(node.name(),"LaneOffsetAction")==0) { m_LaneOffsetAction = std::make_shared<LaneOffsetAction>(node); }  
    if (strcmp(node.name(),"LateralDistanceAction")==0) { m_LateralDistanceAction = std::make_shared<LateralDistanceAction>(node); }  
}
void LateralAction_U::save(pugi::xml_node node)
{
    if ( m_LaneChangeAction ) { m_LaneChangeAction->save(node.append_child("LaneChangeAction")); }  
    if ( m_LaneOffsetAction ) { m_LaneOffsetAction->save(node.append_child("LaneOffsetAction")); }  
    if ( m_LateralDistanceAction ) { m_LateralDistanceAction->save(node.append_child("LateralDistanceAction")); }  
}
LongitudinalAction_U::LongitudinalAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"SpeedAction")==0) { m_SpeedAction = std::make_shared<SpeedAction>(node); }  
    if (strcmp(node.name(),"LongitudinalDistanceAction")==0) { m_LongitudinalDistanceAction = std::make_shared<LongitudinalDistanceAction>(node); }  
}
void LongitudinalAction_U::save(pugi::xml_node node)
{
    if ( m_SpeedAction ) { m_SpeedAction->save(node.append_child("SpeedAction")); }  
    if ( m_LongitudinalDistanceAction ) { m_LongitudinalDistanceAction->save(node.append_child("LongitudinalDistanceAction")); }  
}
ModifyRule_U::ModifyRule_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AddValue")==0) { m_AddValue = std::make_shared<ParameterAddValueRule>(node); }  
    if (strcmp(node.name(),"MultiplyByValue")==0) { m_MultiplyByValue = std::make_shared<ParameterMultiplyByValueRule>(node); }  
}
void ModifyRule_U::save(pugi::xml_node node)
{
    if ( m_AddValue ) { m_AddValue->save(node.append_child("AddValue")); }  
    if ( m_MultiplyByValue ) { m_MultiplyByValue->save(node.append_child("MultiplyByValue")); }  
}
ObjectController_U::ObjectController_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
    if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }  
}
void ObjectController_U::save(pugi::xml_node node)
{
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
    if ( m_Controller ) { m_Controller->save(node.append_child("Controller")); }  
}
ParameterAction_U::ParameterAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"SetAction")==0) { m_SetAction = std::make_shared<ParameterSetAction>(node); }  
    if (strcmp(node.name(),"ModifyAction")==0) { m_ModifyAction = std::make_shared<ParameterModifyAction>(node); }  
}
void ParameterAction_U::save(pugi::xml_node node)
{
    if ( m_SetAction ) { m_SetAction->save(node.append_child("SetAction")); }  
    if ( m_ModifyAction ) { m_ModifyAction->save(node.append_child("ModifyAction")); }  
}
Position_U::Position_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"WorldPosition")==0) { m_WorldPosition = std::make_shared<WorldPosition>(node); }  
    if (strcmp(node.name(),"RelativeWorldPosition")==0) { m_RelativeWorldPosition = std::make_shared<RelativeWorldPosition>(node); }  
    if (strcmp(node.name(),"RelativeObjectPosition")==0) { m_RelativeObjectPosition = std::make_shared<RelativeObjectPosition>(node); }  
    if (strcmp(node.name(),"RoadPosition")==0) { m_RoadPosition = std::make_shared<RoadPosition>(node); }  
    if (strcmp(node.name(),"RelativeRoadPosition")==0) { m_RelativeRoadPosition = std::make_shared<RelativeRoadPosition>(node); }  
    if (strcmp(node.name(),"LanePosition")==0) { m_LanePosition = std::make_shared<LanePosition>(node); }  
    if (strcmp(node.name(),"RelativeLanePosition")==0) { m_RelativeLanePosition = std::make_shared<RelativeLanePosition>(node); }  
    if (strcmp(node.name(),"RoutePosition")==0) { m_RoutePosition = std::make_shared<RoutePosition>(node); }  
}
void Position_U::save(pugi::xml_node node)
{
    if ( m_WorldPosition ) { m_WorldPosition->save(node.append_child("WorldPosition")); }  
    if ( m_RelativeWorldPosition ) { m_RelativeWorldPosition->save(node.append_child("RelativeWorldPosition")); }  
    if ( m_RelativeObjectPosition ) { m_RelativeObjectPosition->save(node.append_child("RelativeObjectPosition")); }  
    if ( m_RoadPosition ) { m_RoadPosition->save(node.append_child("RoadPosition")); }  
    if ( m_RelativeRoadPosition ) { m_RelativeRoadPosition->save(node.append_child("RelativeRoadPosition")); }  
    if ( m_LanePosition ) { m_LanePosition->save(node.append_child("LanePosition")); }  
    if ( m_RelativeLanePosition ) { m_RelativeLanePosition->save(node.append_child("RelativeLanePosition")); }  
    if ( m_RoutePosition ) { m_RoutePosition->save(node.append_child("RoutePosition")); }  
}
PrivateAction_U::PrivateAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"LongitudinalAction")==0) { m_LongitudinalAction = std::make_shared<LongitudinalAction>(node); }  
    if (strcmp(node.name(),"LateralAction")==0) { m_LateralAction = std::make_shared<LateralAction>(node); }  
    if (strcmp(node.name(),"VisibilityAction")==0) { m_VisibilityAction = std::make_shared<VisibilityAction>(node); }  
    if (strcmp(node.name(),"SynchronizeAction")==0) { m_SynchronizeAction = std::make_shared<SynchronizeAction>(node); }  
    if (strcmp(node.name(),"ActivateControllerAction")==0) { m_ActivateControllerAction = std::make_shared<ActivateControllerAction>(node); }  
    if (strcmp(node.name(),"ControllerAction")==0) { m_ControllerAction = std::make_shared<ControllerAction>(node); }  
    if (strcmp(node.name(),"TeleportAction")==0) { m_TeleportAction = std::make_shared<TeleportAction>(node); }  
    if (strcmp(node.name(),"RoutingAction")==0) { m_RoutingAction = std::make_shared<RoutingAction>(node); }  
}
void PrivateAction_U::save(pugi::xml_node node)
{
    if ( m_LongitudinalAction ) { m_LongitudinalAction->save(node.append_child("LongitudinalAction")); }  
    if ( m_LateralAction ) { m_LateralAction->save(node.append_child("LateralAction")); }  
    if ( m_VisibilityAction ) { m_VisibilityAction->save(node.append_child("VisibilityAction")); }  
    if ( m_SynchronizeAction ) { m_SynchronizeAction->save(node.append_child("SynchronizeAction")); }  
    if ( m_ActivateControllerAction ) { m_ActivateControllerAction->save(node.append_child("ActivateControllerAction")); }  
    if ( m_ControllerAction ) { m_ControllerAction->save(node.append_child("ControllerAction")); }  
    if ( m_TeleportAction ) { m_TeleportAction->save(node.append_child("TeleportAction")); }  
    if ( m_RoutingAction ) { m_RoutingAction->save(node.append_child("RoutingAction")); }  
}
RouteRef_U::RouteRef_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Route")==0) { m_Route = std::make_shared<Route>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void RouteRef_U::save(pugi::xml_node node)
{
    if ( m_Route ) { m_Route->save(node.append_child("Route")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
RoutingAction_U::RoutingAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AssignRouteAction")==0) { m_AssignRouteAction = std::make_shared<AssignRouteAction>(node); }  
    if (strcmp(node.name(),"FollowTrajectoryAction")==0) { m_FollowTrajectoryAction = std::make_shared<FollowTrajectoryAction>(node); }  
    if (strcmp(node.name(),"AcquirePositionAction")==0) { m_AcquirePositionAction = std::make_shared<AcquirePositionAction>(node); }  
}
void RoutingAction_U::save(pugi::xml_node node)
{
    if ( m_AssignRouteAction ) { m_AssignRouteAction->save(node.append_child("AssignRouteAction")); }  
    if ( m_FollowTrajectoryAction ) { m_FollowTrajectoryAction->save(node.append_child("FollowTrajectoryAction")); }  
    if ( m_AcquirePositionAction ) { m_AcquirePositionAction->save(node.append_child("AcquirePositionAction")); }  
}
SelectedEntities_U::SelectedEntities_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"EntityRef")==0)
    {
        m_EntityRefs.push_back(std::make_shared<EntityRef>(node));
    }
    // for (pugi::xml_node e_EntityRef : node.children())
    // {
    // 	if (strcmp(node.name(),"EntityRef")==0)
    // 	{
    // 		m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef)); 
    // 	}
    // }
    if (strcmp(node.name(),"ByType")==0)
    {
        m_ByTypes.push_back(std::make_shared<ByType>(node));
    }
    // for (pugi::xml_node e_ByType : node.children())
    // {
    // 	if (strcmp(node.name(),"ByType")==0)
    // 	{
    // 		m_ByTypes.push_back(std::make_shared<ByType>(e_ByType)); 
    // 	}
    // }
}
void SelectedEntities_U::save(pugi::xml_node node)
{
    for (std::shared_ptr<EntityRef> m_EntityRef : m_EntityRefs ){ m_EntityRef->save(node.append_child("EntityRef")); } 
    for (std::shared_ptr<ByType> m_ByType : m_ByTypes ){ m_ByType->save(node.append_child("ByType")); } 
}
Shape_U::Shape_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Polyline")==0) { m_Polyline = std::make_shared<Polyline>(node); }  
    if (strcmp(node.name(),"Clothoid")==0) { m_Clothoid = std::make_shared<Clothoid>(node); }  
    if (strcmp(node.name(),"Nurbs")==0) { m_Nurbs = std::make_shared<Nurbs>(node); }  
}
void Shape_U::save(pugi::xml_node node)
{
    if ( m_Polyline ) { m_Polyline->save(node.append_child("Polyline")); }  
    if ( m_Clothoid ) { m_Clothoid->save(node.append_child("Clothoid")); }  
    if ( m_Nurbs ) { m_Nurbs->save(node.append_child("Nurbs")); }  
}
SpeedActionTarget_U::SpeedActionTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"RelativeTargetSpeed")==0) { m_RelativeTargetSpeed = std::make_shared<RelativeTargetSpeed>(node); }  
    if (strcmp(node.name(),"AbsoluteTargetSpeed")==0) { m_AbsoluteTargetSpeed = std::make_shared<AbsoluteTargetSpeed>(node); }  
}
void SpeedActionTarget_U::save(pugi::xml_node node)
{
    if ( m_RelativeTargetSpeed ) { m_RelativeTargetSpeed->save(node.append_child("RelativeTargetSpeed")); }  
    if ( m_AbsoluteTargetSpeed ) { m_AbsoluteTargetSpeed->save(node.append_child("AbsoluteTargetSpeed")); }  
}
TimeReference_U::TimeReference_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"None")==0) { m_None = std::make_shared<None>(node); }  
    if (strcmp(node.name(),"Timing")==0) { m_Timing = std::make_shared<Timing>(node); }  
}
void TimeReference_U::save(pugi::xml_node node)
{
    if ( m_None ) { m_None->save(node.append_child("None")); }  
    if ( m_Timing ) { m_Timing->save(node.append_child("Timing")); }  
}
TimeToCollisionConditionTarget_U::TimeToCollisionConditionTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Position")==0) { m_Position = std::make_shared<Position>(node); }  
    if (strcmp(node.name(),"EntityRef")==0) { m_EntityRef = std::make_shared<EntityRef>(node); }  
}
void TimeToCollisionConditionTarget_U::save(pugi::xml_node node)
{
    if ( m_Position ) { m_Position->save(node.append_child("Position")); }  
    if ( m_EntityRef ) { m_EntityRef->save(node.append_child("EntityRef")); }  
}
TrafficAction_U::TrafficAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"TrafficSourceAction")==0) { m_TrafficSourceAction = std::make_shared<TrafficSourceAction>(node); }  
    if (strcmp(node.name(),"TrafficSinkAction")==0) { m_TrafficSinkAction = std::make_shared<TrafficSinkAction>(node); }  
    if (strcmp(node.name(),"TrafficSwarmAction")==0) { m_TrafficSwarmAction = std::make_shared<TrafficSwarmAction>(node); }  
}
void TrafficAction_U::save(pugi::xml_node node)
{
    if ( m_TrafficSourceAction ) { m_TrafficSourceAction->save(node.append_child("TrafficSourceAction")); }  
    if ( m_TrafficSinkAction ) { m_TrafficSinkAction->save(node.append_child("TrafficSinkAction")); }  
    if ( m_TrafficSwarmAction ) { m_TrafficSwarmAction->save(node.append_child("TrafficSwarmAction")); }  
}
TrafficSignalAction_U::TrafficSignalAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"TrafficSignalControllerAction")==0) { m_TrafficSignalControllerAction = std::make_shared<TrafficSignalControllerAction>(node); }  
    if (strcmp(node.name(),"TrafficSignalStateAction")==0) { m_TrafficSignalStateAction = std::make_shared<TrafficSignalStateAction>(node); }  
}
void TrafficSignalAction_U::save(pugi::xml_node node)
{
    if ( m_TrafficSignalControllerAction ) { m_TrafficSignalControllerAction->save(node.append_child("TrafficSignalControllerAction")); }  
    if ( m_TrafficSignalStateAction ) { m_TrafficSignalStateAction->save(node.append_child("TrafficSignalStateAction")); }  
}
AbsoluteSpeed::AbsoluteSpeed(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void AbsoluteSpeed::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
AbsoluteTargetLane::AbsoluteTargetLane(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void AbsoluteTargetLane::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
AbsoluteTargetLaneOffset::AbsoluteTargetLaneOffset(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void AbsoluteTargetLaneOffset::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
AbsoluteTargetSpeed::AbsoluteTargetSpeed(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void AbsoluteTargetSpeed::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
AccelerationCondition::AccelerationCondition(pugi::xml_node node) 
{
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void AccelerationCondition::save(pugi::xml_node node)
{
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
AcquirePositionAction::AcquirePositionAction(pugi::xml_node node) 
{
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void AcquirePositionAction::save(pugi::xml_node node)
{
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
Act::Act(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    for (pugi::xml_node e_ManeuverGroup = node.child("ManeuverGroup"); e_ManeuverGroup; e_ManeuverGroup= e_ManeuverGroup.next_sibling("ManeuverGroup"))
    {
        m_ManeuverGroups.push_back(std::make_shared<ManeuverGroup>(e_ManeuverGroup));
    }
    if (node.child("StartTrigger")) { m_StartTrigger = std::make_shared<Trigger>(node.child("StartTrigger")); }  
    if (node.child("StopTrigger")) { m_StopTrigger = std::make_shared<Trigger>(node.child("StopTrigger")); }  
}
void Act::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    for (std::shared_ptr<ManeuverGroup> m_ManeuverGroup : m_ManeuverGroups ){ m_ManeuverGroup->save(node.append_child("ManeuverGroup")); } 
    if (m_StartTrigger ) { m_StartTrigger->save(node.append_child("StartTrigger")); }   
    if (m_StopTrigger ) { m_StopTrigger->save(node.append_child("StopTrigger")); }   
}
Action::Action(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.first_child()) { m_Action = std::make_shared<Action_U>(node.first_child()); }  
}
void Action::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_Action) { m_Action->save(node); }  
}
ActivateControllerAction::ActivateControllerAction(pugi::xml_node node) 
{
    if (node.attribute("lateral")) { lateral = Boolean(node.attribute("lateral")); }  // >> union - handle properly
    if (node.attribute("longitudinal")) { longitudinal = Boolean(node.attribute("longitudinal")); }  // >> union - handle properly
}
void ActivateControllerAction::save(pugi::xml_node node)
{
    lateral.save(node.append_attribute("lateral")); 
    longitudinal.save(node.append_attribute("longitudinal")); 
}
Actors::Actors(pugi::xml_node node) 
{
    if (node.attribute("selectTriggeringEntities")) { selectTriggeringEntities = Boolean(node.attribute("selectTriggeringEntities")); }  // >> union - handle properly
    for (pugi::xml_node e_EntityRef = node.child("EntityRef"); e_EntityRef; e_EntityRef= e_EntityRef.next_sibling("EntityRef"))
    {
        m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
    }
}
void Actors::save(pugi::xml_node node)
{
    selectTriggeringEntities.save(node.append_attribute("selectTriggeringEntities")); 
    for (std::shared_ptr<EntityRef> m_EntityRef : m_EntityRefs ){ m_EntityRef->save(node.append_child("EntityRef")); } 
}
AddEntityAction::AddEntityAction(pugi::xml_node node) 
{
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void AddEntityAction::save(pugi::xml_node node)
{
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
AssignControllerAction::AssignControllerAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_AssignControllerAction = std::make_shared<AssignControllerAction_U>(node.first_child()); }  
}
void AssignControllerAction::save(pugi::xml_node node)
{
    if (m_AssignControllerAction) { m_AssignControllerAction->save(node); }  
}
AssignRouteAction::AssignRouteAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_AssignRouteAction = std::make_shared<AssignRouteAction_U>(node.first_child()); }  
}
void AssignRouteAction::save(pugi::xml_node node)
{
    if (m_AssignRouteAction) { m_AssignRouteAction->save(node); }  
}
Axle::Axle(pugi::xml_node node) 
{
    if (node.attribute("maxSteering")) { maxSteering = Double(node.attribute("maxSteering")); }  // >> union - handle properly
    if (node.attribute("positionX")) { positionX = Double(node.attribute("positionX")); }  // >> union - handle properly
    if (node.attribute("positionZ")) { positionZ = Double(node.attribute("positionZ")); }  // >> union - handle properly
    if (node.attribute("trackWidth")) { trackWidth = Double(node.attribute("trackWidth")); }  // >> union - handle properly
    if (node.attribute("wheelDiameter")) { wheelDiameter = Double(node.attribute("wheelDiameter")); }  // >> union - handle properly
}
void Axle::save(pugi::xml_node node)
{
    maxSteering.save(node.append_attribute("maxSteering")); 
    positionX.save(node.append_attribute("positionX")); 
    positionZ.save(node.append_attribute("positionZ")); 
    trackWidth.save(node.append_attribute("trackWidth")); 
    wheelDiameter.save(node.append_attribute("wheelDiameter")); 
}
Axles::Axles(pugi::xml_node node) 
{
    if (node.child("FrontAxle")) { m_FrontAxle = std::make_shared<Axle>(node.child("FrontAxle")); }  
    if (node.child("RearAxle")) { m_RearAxle = std::make_shared<Axle>(node.child("RearAxle")); }  
    for (pugi::xml_node e_AdditionalAxle = node.child("AdditionalAxle"); e_AdditionalAxle; e_AdditionalAxle= e_AdditionalAxle.next_sibling("AdditionalAxle"))
    {
        m_AdditionalAxles.push_back(std::make_shared<Axle>(e_AdditionalAxle));
    }
}
void Axles::save(pugi::xml_node node)
{
    if (m_FrontAxle ) { m_FrontAxle->save(node.append_child("FrontAxle")); }   
    if (m_RearAxle ) { m_RearAxle->save(node.append_child("RearAxle")); }   
    for (std::shared_ptr<Axle> m_AdditionalAxle : m_AdditionalAxles ){ m_AdditionalAxle->save(node.append_child("AdditionalAxle")); } 
}
BoundingBox::BoundingBox(pugi::xml_node node) 
{
    if (node.child("Center")) { m_Center = std::make_shared<Center>(node.child("Center")); }  
    if (node.child("Dimensions")) { m_Dimensions = std::make_shared<Dimensions>(node.child("Dimensions")); }  
}
void BoundingBox::save(pugi::xml_node node)
{
    if (m_Center ) { m_Center->save(node.append_child("Center")); }   
    if (m_Dimensions ) { m_Dimensions->save(node.append_child("Dimensions")); }   
}
ByEntityCondition::ByEntityCondition(pugi::xml_node node) 
{
    if (node.child("TriggeringEntities")) { m_TriggeringEntities = std::make_shared<TriggeringEntities>(node.child("TriggeringEntities")); }  
    if (node.child("EntityCondition")) { m_EntityCondition = std::make_shared<EntityCondition>(node.child("EntityCondition")); }  
}
void ByEntityCondition::save(pugi::xml_node node)
{
    if (m_TriggeringEntities ) { m_TriggeringEntities->save(node.append_child("TriggeringEntities")); }   
    if (m_EntityCondition ) { m_EntityCondition->save(node.append_child("EntityCondition")); }   
}
ByObjectType::ByObjectType(pugi::xml_node node) 
{
    if (node.attribute("type")) { type = ObjectType(node.attribute("type")); }  // >> union - handle properly
}
void ByObjectType::save(pugi::xml_node node)
{
    type.save(node.append_attribute("type")); 
}
ByType::ByType(pugi::xml_node node) 
{
    if (node.attribute("objectType")) { objectType = ObjectType(node.attribute("objectType")); }  // >> union - handle properly
}
void ByType::save(pugi::xml_node node)
{
    objectType.save(node.append_attribute("objectType")); 
}
ByValueCondition::ByValueCondition(pugi::xml_node node) 
{
    if (node.first_child()) { m_ByValueCondition = std::make_shared<ByValueCondition_U>(node.first_child()); }  
}
void ByValueCondition::save(pugi::xml_node node)
{
    if (m_ByValueCondition) { m_ByValueCondition->save(node); }  
}
Catalog::Catalog(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    for (pugi::xml_node e_Vehicle = node.child("Vehicle"); e_Vehicle; e_Vehicle= e_Vehicle.next_sibling("Vehicle"))
    {
        m_Vehicles.push_back(std::make_shared<Vehicle>(e_Vehicle));
    }
    for (pugi::xml_node e_Controller = node.child("Controller"); e_Controller; e_Controller= e_Controller.next_sibling("Controller"))
    {
        m_Controllers.push_back(std::make_shared<Controller>(e_Controller));
    }
    for (pugi::xml_node e_Pedestrian = node.child("Pedestrian"); e_Pedestrian; e_Pedestrian= e_Pedestrian.next_sibling("Pedestrian"))
    {
        m_Pedestrians.push_back(std::make_shared<Pedestrian>(e_Pedestrian));
    }
    for (pugi::xml_node e_MiscObject = node.child("MiscObject"); e_MiscObject; e_MiscObject= e_MiscObject.next_sibling("MiscObject"))
    {
        m_MiscObjects.push_back(std::make_shared<MiscObject>(e_MiscObject));
    }
    for (pugi::xml_node e_Environment = node.child("Environment"); e_Environment; e_Environment= e_Environment.next_sibling("Environment"))
    {
        m_Environments.push_back(std::make_shared<Environment>(e_Environment));
    }
    for (pugi::xml_node e_Maneuver = node.child("Maneuver"); e_Maneuver; e_Maneuver= e_Maneuver.next_sibling("Maneuver"))
    {
        m_Maneuvers.push_back(std::make_shared<Maneuver>(e_Maneuver));
    }
    for (pugi::xml_node e_Trajectory = node.child("Trajectory"); e_Trajectory; e_Trajectory= e_Trajectory.next_sibling("Trajectory"))
    {
        m_Trajectorys.push_back(std::make_shared<Trajectory>(e_Trajectory));
    }
    for (pugi::xml_node e_Route = node.child("Route"); e_Route; e_Route= e_Route.next_sibling("Route"))
    {
        m_Routes.push_back(std::make_shared<Route>(e_Route));
    }
}
void Catalog::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    for (std::shared_ptr<Vehicle> m_Vehicle : m_Vehicles ){ m_Vehicle->save(node.append_child("Vehicle")); } 
    for (std::shared_ptr<Controller> m_Controller : m_Controllers ){ m_Controller->save(node.append_child("Controller")); } 
    for (std::shared_ptr<Pedestrian> m_Pedestrian : m_Pedestrians ){ m_Pedestrian->save(node.append_child("Pedestrian")); } 
    for (std::shared_ptr<MiscObject> m_MiscObject : m_MiscObjects ){ m_MiscObject->save(node.append_child("MiscObject")); } 
    for (std::shared_ptr<Environment> m_Environment : m_Environments ){ m_Environment->save(node.append_child("Environment")); } 
    for (std::shared_ptr<Maneuver> m_Maneuver : m_Maneuvers ){ m_Maneuver->save(node.append_child("Maneuver")); } 
    for (std::shared_ptr<Trajectory> m_Trajectory : m_Trajectorys ){ m_Trajectory->save(node.append_child("Trajectory")); } 
    for (std::shared_ptr<Route> m_Route : m_Routes ){ m_Route->save(node.append_child("Route")); } 
}
CatalogLocations::CatalogLocations(pugi::xml_node node) 
{
    if (node.child("VehicleCatalog")) { m_VehicleCatalog = std::make_shared<VehicleCatalogLocation>(node.child("VehicleCatalog")); }  
    if (node.child("ControllerCatalog")) { m_ControllerCatalog = std::make_shared<ControllerCatalogLocation>(node.child("ControllerCatalog")); }  
    if (node.child("PedestrianCatalog")) { m_PedestrianCatalog = std::make_shared<PedestrianCatalogLocation>(node.child("PedestrianCatalog")); }  
    if (node.child("MiscObjectCatalog")) { m_MiscObjectCatalog = std::make_shared<MiscObjectCatalogLocation>(node.child("MiscObjectCatalog")); }  
    if (node.child("EnvironmentCatalog")) { m_EnvironmentCatalog = std::make_shared<EnvironmentCatalogLocation>(node.child("EnvironmentCatalog")); }  
    if (node.child("ManeuverCatalog")) { m_ManeuverCatalog = std::make_shared<ManeuverCatalogLocation>(node.child("ManeuverCatalog")); }  
    if (node.child("TrajectoryCatalog")) { m_TrajectoryCatalog = std::make_shared<TrajectoryCatalogLocation>(node.child("TrajectoryCatalog")); }  
    if (node.child("RouteCatalog")) { m_RouteCatalog = std::make_shared<RouteCatalogLocation>(node.child("RouteCatalog")); }  
}
void CatalogLocations::save(pugi::xml_node node)
{
    if (m_VehicleCatalog ) { m_VehicleCatalog->save(node.append_child("VehicleCatalog")); }   
    if (m_ControllerCatalog ) { m_ControllerCatalog->save(node.append_child("ControllerCatalog")); }   
    if (m_PedestrianCatalog ) { m_PedestrianCatalog->save(node.append_child("PedestrianCatalog")); }   
    if (m_MiscObjectCatalog ) { m_MiscObjectCatalog->save(node.append_child("MiscObjectCatalog")); }   
    if (m_EnvironmentCatalog ) { m_EnvironmentCatalog->save(node.append_child("EnvironmentCatalog")); }   
    if (m_ManeuverCatalog ) { m_ManeuverCatalog->save(node.append_child("ManeuverCatalog")); }   
    if (m_TrajectoryCatalog ) { m_TrajectoryCatalog->save(node.append_child("TrajectoryCatalog")); }   
    if (m_RouteCatalog ) { m_RouteCatalog->save(node.append_child("RouteCatalog")); }   
}
CatalogReference::CatalogReference(pugi::xml_node node) 
{
    if (node.attribute("catalogName")) { catalogName = String(node.attribute("catalogName")); }  // >> union - handle properly
    if (node.attribute("entryName")) { entryName = String(node.attribute("entryName")); }  // >> union - handle properly
    if (node.child("ParameterAssignments")) { m_ParameterAssignments = std::make_shared<ParameterAssignments>(node.child("ParameterAssignments")); }  
}
void CatalogReference::save(pugi::xml_node node)
{
    catalogName.save(node.append_attribute("catalogName")); 
    entryName.save(node.append_attribute("entryName")); 
    if (m_ParameterAssignments ) { m_ParameterAssignments->save(node.append_child("ParameterAssignments")); }   
}
Center::Center(pugi::xml_node node) 
{
    if (node.attribute("x")) { x = Double(node.attribute("x")); }  // >> union - handle properly
    if (node.attribute("y")) { y = Double(node.attribute("y")); }  // >> union - handle properly
    if (node.attribute("z")) { z = Double(node.attribute("z")); }  // >> union - handle properly
}
void Center::save(pugi::xml_node node)
{
    x.save(node.append_attribute("x")); 
    y.save(node.append_attribute("y")); 
    z.save(node.append_attribute("z")); 
}
CentralSwarmObject::CentralSwarmObject(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
}
void CentralSwarmObject::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
}
Clothoid::Clothoid(pugi::xml_node node) 
{
    if (node.attribute("curvature")) { curvature = Double(node.attribute("curvature")); }  // >> union - handle properly
    if (node.attribute("curvatureDot")) { curvatureDot = Double(node.attribute("curvatureDot")); }  // >> union - handle properly
    if (node.attribute("length")) { length = Double(node.attribute("length")); }  // >> union - handle properly
    if (node.attribute("startTime")) { startTime = Double(node.attribute("startTime")); }  // >> union - handle properly
    if (node.attribute("stopTime")) { stopTime = Double(node.attribute("stopTime")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void Clothoid::save(pugi::xml_node node)
{
    curvature.save(node.append_attribute("curvature")); 
    curvatureDot.save(node.append_attribute("curvatureDot")); 
    length.save(node.append_attribute("length")); 
    startTime.save(node.append_attribute("startTime")); 
    stopTime.save(node.append_attribute("stopTime")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
CollisionCondition::CollisionCondition(pugi::xml_node node) 
{
    if (node.first_child()) { m_CollisionCondition = std::make_shared<CollisionCondition_U>(node.first_child()); }  
}
void CollisionCondition::save(pugi::xml_node node)
{
    if (m_CollisionCondition) { m_CollisionCondition->save(node); }  
}
Condition::Condition(pugi::xml_node node) 
{
    if (node.attribute("conditionEdge")) { conditionEdge = ConditionEdge(node.attribute("conditionEdge")); }  // >> union - handle properly
    if (node.attribute("delay")) { delay = Double(node.attribute("delay")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.first_child()) { m_Condition = std::make_shared<Condition_U>(node.first_child()); }  
}
void Condition::save(pugi::xml_node node)
{
    conditionEdge.save(node.append_attribute("conditionEdge")); 
    delay.save(node.append_attribute("delay")); 
    name.save(node.append_attribute("name")); 
    if (m_Condition) { m_Condition->save(node); }  
}
ConditionGroup::ConditionGroup(pugi::xml_node node) 
{
    for (pugi::xml_node e_Condition = node.child("Condition"); e_Condition; e_Condition= e_Condition.next_sibling("Condition"))
    {
        m_Conditions.push_back(std::make_shared<Condition>(e_Condition));
    }
}
void ConditionGroup::save(pugi::xml_node node)
{
    for (std::shared_ptr<Condition> m_Condition : m_Conditions ){ m_Condition->save(node.append_child("Condition")); } 
}
Controller::Controller(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void Controller::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
ControllerAction::ControllerAction(pugi::xml_node node) 
{
    if (node.child("AssignControllerAction")) { m_AssignControllerAction = std::make_shared<AssignControllerAction>(node.child("AssignControllerAction")); }  
    if (node.child("OverrideControllerValueAction")) { m_OverrideControllerValueAction = std::make_shared<OverrideControllerValueAction>(node.child("OverrideControllerValueAction")); }  
}
void ControllerAction::save(pugi::xml_node node)
{
    if (m_AssignControllerAction ) { m_AssignControllerAction->save(node.append_child("AssignControllerAction")); }   
    if (m_OverrideControllerValueAction ) { m_OverrideControllerValueAction->save(node.append_child("OverrideControllerValueAction")); }   
}
ControllerCatalogLocation::ControllerCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void ControllerCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
ControllerDistribution::ControllerDistribution(pugi::xml_node node) 
{
    for (pugi::xml_node e_ControllerDistributionEntry = node.child("ControllerDistributionEntry"); e_ControllerDistributionEntry; e_ControllerDistributionEntry= e_ControllerDistributionEntry.next_sibling("ControllerDistributionEntry"))
    {
        m_ControllerDistributionEntrys.push_back(std::make_shared<ControllerDistributionEntry>(e_ControllerDistributionEntry));
    }
}
void ControllerDistribution::save(pugi::xml_node node)
{
    for (std::shared_ptr<ControllerDistributionEntry> m_ControllerDistributionEntry : m_ControllerDistributionEntrys ){ m_ControllerDistributionEntry->save(node.append_child("ControllerDistributionEntry")); } 
}
ControllerDistributionEntry::ControllerDistributionEntry(pugi::xml_node node) 
{
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
    if (node.first_child()) { m_ControllerDistributionEntry = std::make_shared<ControllerDistributionEntry_U>(node.first_child()); }  
}
void ControllerDistributionEntry::save(pugi::xml_node node)
{
    weight.save(node.append_attribute("weight")); 
    if (m_ControllerDistributionEntry) { m_ControllerDistributionEntry->save(node); }  
}
ControlPoint::ControlPoint(pugi::xml_node node) 
{
    if (node.attribute("time")) { time = Double(node.attribute("time")); }  // >> union - handle properly
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void ControlPoint::save(pugi::xml_node node)
{
    time.save(node.append_attribute("time")); 
    weight.save(node.append_attribute("weight")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
CustomCommandAction::CustomCommandAction(pugi::xml_node node) 
{
    if (node.attribute("type")) { type = String(node.attribute("type")); }  // >> union - handle properly
}
void CustomCommandAction::save(pugi::xml_node node)
{
    type.save(node.append_attribute("type")); 
}
DeleteEntityAction::DeleteEntityAction(pugi::xml_node node) 
{
}
void DeleteEntityAction::save(pugi::xml_node node)
{
}
Dimensions::Dimensions(pugi::xml_node node) 
{
    if (node.attribute("height")) { height = Double(node.attribute("height")); }  // >> union - handle properly
    if (node.attribute("length")) { length = Double(node.attribute("length")); }  // >> union - handle properly
    if (node.attribute("width")) { width = Double(node.attribute("width")); }  // >> union - handle properly
}
void Dimensions::save(pugi::xml_node node)
{
    height.save(node.append_attribute("height")); 
    length.save(node.append_attribute("length")); 
    width.save(node.append_attribute("width")); 
}
Directory::Directory(pugi::xml_node node) 
{
    if (node.attribute("path")) { path = String(node.attribute("path")); }  // >> union - handle properly
}
void Directory::save(pugi::xml_node node)
{
    path.save(node.append_attribute("path")); 
}
DistanceCondition::DistanceCondition(pugi::xml_node node) 
{
    if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void DistanceCondition::save(pugi::xml_node node)
{
    alongRoute.save(node.append_attribute("alongRoute")); 
    freespace.save(node.append_attribute("freespace")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
DynamicConstraints::DynamicConstraints(pugi::xml_node node) 
{
    if (node.attribute("maxAcceleration")) { maxAcceleration = Double(node.attribute("maxAcceleration")); }  // >> union - handle properly
    if (node.attribute("maxDeceleration")) { maxDeceleration = Double(node.attribute("maxDeceleration")); }  // >> union - handle properly
    if (node.attribute("maxSpeed")) { maxSpeed = Double(node.attribute("maxSpeed")); }  // >> union - handle properly
}
void DynamicConstraints::save(pugi::xml_node node)
{
    maxAcceleration.save(node.append_attribute("maxAcceleration")); 
    maxDeceleration.save(node.append_attribute("maxDeceleration")); 
    maxSpeed.save(node.append_attribute("maxSpeed")); 
}
EndOfRoadCondition::EndOfRoadCondition(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
}
void EndOfRoadCondition::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
}
Entities::Entities(pugi::xml_node node) 
{
    for (pugi::xml_node e_ScenarioObject = node.child("ScenarioObject"); e_ScenarioObject; e_ScenarioObject= e_ScenarioObject.next_sibling("ScenarioObject"))
    {
        m_ScenarioObjects.push_back(std::make_shared<ScenarioObject>(e_ScenarioObject));
    }
    for (pugi::xml_node e_EntitySelection = node.child("EntitySelection"); e_EntitySelection; e_EntitySelection= e_EntitySelection.next_sibling("EntitySelection"))
    {
        m_EntitySelections.push_back(std::make_shared<EntitySelection>(e_EntitySelection));
    }
}
void Entities::save(pugi::xml_node node)
{
    for (std::shared_ptr<ScenarioObject> m_ScenarioObject : m_ScenarioObjects ){ m_ScenarioObject->save(node.append_child("ScenarioObject")); } 
    for (std::shared_ptr<EntitySelection> m_EntitySelection : m_EntitySelections ){ m_EntitySelection->save(node.append_child("EntitySelection")); } 
}
EntityAction::EntityAction(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.first_child()) { m_EntityAction = std::make_shared<EntityAction_U>(node.first_child()); }  
}
void EntityAction::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    if (m_EntityAction) { m_EntityAction->save(node); }  
}
EntityCondition::EntityCondition(pugi::xml_node node) 
{
    if (node.first_child()) { m_EntityCondition = std::make_shared<EntityCondition_U>(node.first_child()); }  
}
void EntityCondition::save(pugi::xml_node node)
{
    if (m_EntityCondition) { m_EntityCondition->save(node); }  
}
EntityRef::EntityRef(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
}
void EntityRef::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
}
EntitySelection::EntitySelection(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("Members")) { m_Members = std::make_shared<SelectedEntities>(node.child("Members")); }  
}
void EntitySelection::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_Members ) { m_Members->save(node.append_child("Members")); }   
}
Environment::Environment(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("TimeOfDay")) { m_TimeOfDay = std::make_shared<TimeOfDay>(node.child("TimeOfDay")); }  
    if (node.child("Weather")) { m_Weather = std::make_shared<Weather>(node.child("Weather")); }  
    if (node.child("RoadCondition")) { m_RoadCondition = std::make_shared<RoadCondition>(node.child("RoadCondition")); }  
}
void Environment::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_TimeOfDay ) { m_TimeOfDay->save(node.append_child("TimeOfDay")); }   
    if (m_Weather ) { m_Weather->save(node.append_child("Weather")); }   
    if (m_RoadCondition ) { m_RoadCondition->save(node.append_child("RoadCondition")); }   
}
EnvironmentAction::EnvironmentAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_EnvironmentAction = std::make_shared<EnvironmentAction_U>(node.first_child()); }  
}
void EnvironmentAction::save(pugi::xml_node node)
{
    if (m_EnvironmentAction) { m_EnvironmentAction->save(node); }  
}
EnvironmentCatalogLocation::EnvironmentCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void EnvironmentCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
Event::Event(pugi::xml_node node) 
{
    if (node.attribute("maximumExecutionCount")) { maximumExecutionCount = UnsignedInt(node.attribute("maximumExecutionCount")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("priority")) { priority = Priority(node.attribute("priority")); }  // >> union - handle properly
    for (pugi::xml_node e_Action = node.child("Action"); e_Action; e_Action= e_Action.next_sibling("Action"))
    {
        m_Actions.push_back(std::make_shared<Action>(e_Action));
    }
    if (node.child("StartTrigger")) { m_StartTrigger = std::make_shared<Trigger>(node.child("StartTrigger")); }  
}
void Event::save(pugi::xml_node node)
{
    maximumExecutionCount.save(node.append_attribute("maximumExecutionCount")); 
    name.save(node.append_attribute("name")); 
    priority.save(node.append_attribute("priority")); 
    for (std::shared_ptr<Action> m_Action : m_Actions ){ m_Action->save(node.append_child("Action")); } 
    if (m_StartTrigger ) { m_StartTrigger->save(node.append_child("StartTrigger")); }   
}
File::File(pugi::xml_node node) 
{
    if (node.attribute("filepath")) { filepath = String(node.attribute("filepath")); }  // >> union - handle properly
}
void File::save(pugi::xml_node node)
{
    filepath.save(node.append_attribute("filepath")); 
}
FileHeader::FileHeader(pugi::xml_node node) 
{
    if (node.attribute("author")) { author = String(node.attribute("author")); }  // >> union - handle properly
    if (node.attribute("date")) { date = DateTime(node.attribute("date")); }  // >> union - handle properly
    if (node.attribute("description")) { description = String(node.attribute("description")); }  // >> union - handle properly
    if (node.attribute("revMajor")) { revMajor = UnsignedShort(node.attribute("revMajor")); }  // >> union - handle properly
    if (node.attribute("revMinor")) { revMinor = UnsignedShort(node.attribute("revMinor")); }  // >> union - handle properly
}
void FileHeader::save(pugi::xml_node node)
{
    author.save(node.append_attribute("author")); 
    date.save(node.append_attribute("date")); 
    description.save(node.append_attribute("description")); 
    revMajor.save(node.append_attribute("revMajor")); 
    revMinor.save(node.append_attribute("revMinor")); 
}
FinalSpeed::FinalSpeed(pugi::xml_node node) 
{
    if (node.first_child()) { m_FinalSpeed = std::make_shared<FinalSpeed_U>(node.first_child()); }  
}
void FinalSpeed::save(pugi::xml_node node)
{
    if (m_FinalSpeed) { m_FinalSpeed->save(node); }  
}
Fog::Fog(pugi::xml_node node) 
{
    if (node.attribute("visualRange")) { visualRange = Double(node.attribute("visualRange")); }  // >> union - handle properly
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
}
void Fog::save(pugi::xml_node node)
{
    visualRange.save(node.append_attribute("visualRange")); 
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
}
FollowTrajectoryAction::FollowTrajectoryAction(pugi::xml_node node) 
{
    if (node.child("Trajectory")) { m_Trajectory = std::make_shared<Trajectory>(node.child("Trajectory")); }  
    if (node.child("CatalogReference")) { m_CatalogReference = std::make_shared<CatalogReference>(node.child("CatalogReference")); }  
    if (node.child("TimeReference")) { m_TimeReference = std::make_shared<TimeReference>(node.child("TimeReference")); }  
    if (node.child("TrajectoryFollowingMode")) { m_TrajectoryFollowingMode = std::make_shared<TrajectoryFollowingMode>(node.child("TrajectoryFollowingMode")); }  
}
void FollowTrajectoryAction::save(pugi::xml_node node)
{
    if (m_Trajectory ) { m_Trajectory->save(node.append_child("Trajectory")); }   
    if (m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }   
    if (m_TimeReference ) { m_TimeReference->save(node.append_child("TimeReference")); }   
    if (m_TrajectoryFollowingMode ) { m_TrajectoryFollowingMode->save(node.append_child("TrajectoryFollowingMode")); }   
}
GlobalAction::GlobalAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_GlobalAction = std::make_shared<GlobalAction_U>(node.first_child()); }  
}
void GlobalAction::save(pugi::xml_node node)
{
    if (m_GlobalAction) { m_GlobalAction->save(node); }  
}
InfrastructureAction::InfrastructureAction(pugi::xml_node node) 
{
    if (node.child("TrafficSignalAction")) { m_TrafficSignalAction = std::make_shared<TrafficSignalAction>(node.child("TrafficSignalAction")); }  
}
void InfrastructureAction::save(pugi::xml_node node)
{
    if (m_TrafficSignalAction ) { m_TrafficSignalAction->save(node.append_child("TrafficSignalAction")); }   
}
Init::Init(pugi::xml_node node) 
{
    if (node.child("Actions")) { m_Actions = std::make_shared<InitActions>(node.child("Actions")); }  
}
void Init::save(pugi::xml_node node)
{
    if (m_Actions ) { m_Actions->save(node.append_child("Actions")); }   
}
InitActions::InitActions(pugi::xml_node node) 
{
    for (pugi::xml_node e_GlobalAction = node.child("GlobalAction"); e_GlobalAction; e_GlobalAction= e_GlobalAction.next_sibling("GlobalAction"))
    {
        m_GlobalActions.push_back(std::make_shared<GlobalAction>(e_GlobalAction));
    }
    for (pugi::xml_node e_UserDefinedAction = node.child("UserDefinedAction"); e_UserDefinedAction; e_UserDefinedAction= e_UserDefinedAction.next_sibling("UserDefinedAction"))
    {
        m_UserDefinedActions.push_back(std::make_shared<UserDefinedAction>(e_UserDefinedAction));
    }
    for (pugi::xml_node e_Private = node.child("Private"); e_Private; e_Private= e_Private.next_sibling("Private"))
    {
        m_Privates.push_back(std::make_shared<Private>(e_Private));
    }
}
void InitActions::save(pugi::xml_node node)
{
    for (std::shared_ptr<GlobalAction> m_GlobalAction : m_GlobalActions ){ m_GlobalAction->save(node.append_child("GlobalAction")); } 
    for (std::shared_ptr<UserDefinedAction> m_UserDefinedAction : m_UserDefinedActions ){ m_UserDefinedAction->save(node.append_child("UserDefinedAction")); } 
    for (std::shared_ptr<Private> m_Private : m_Privates ){ m_Private->save(node.append_child("Private")); } 
}
InRoutePosition::InRoutePosition(pugi::xml_node node) 
{
    if (node.first_child()) { m_InRoutePosition = std::make_shared<InRoutePosition_U>(node.first_child()); }  
}
void InRoutePosition::save(pugi::xml_node node)
{
    if (m_InRoutePosition) { m_InRoutePosition->save(node); }  
}
Knot::Knot(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void Knot::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
LaneChangeAction::LaneChangeAction(pugi::xml_node node) 
{
    if (node.attribute("targetLaneOffset")) { targetLaneOffset = Double(node.attribute("targetLaneOffset")); }  // >> union - handle properly
    if (node.child("LaneChangeActionDynamics")) { m_LaneChangeActionDynamics = std::make_shared<TransitionDynamics>(node.child("LaneChangeActionDynamics")); }  
    if (node.child("LaneChangeTarget")) { m_LaneChangeTarget = std::make_shared<LaneChangeTarget>(node.child("LaneChangeTarget")); }  
}
void LaneChangeAction::save(pugi::xml_node node)
{
    targetLaneOffset.save(node.append_attribute("targetLaneOffset")); 
    if (m_LaneChangeActionDynamics ) { m_LaneChangeActionDynamics->save(node.append_child("LaneChangeActionDynamics")); }   
    if (m_LaneChangeTarget ) { m_LaneChangeTarget->save(node.append_child("LaneChangeTarget")); }   
}
LaneChangeTarget::LaneChangeTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_LaneChangeTarget = std::make_shared<LaneChangeTarget_U>(node.first_child()); }  
}
void LaneChangeTarget::save(pugi::xml_node node)
{
    if (m_LaneChangeTarget) { m_LaneChangeTarget->save(node); }  
}
LaneOffsetAction::LaneOffsetAction(pugi::xml_node node) 
{
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.child("LaneOffsetActionDynamics")) { m_LaneOffsetActionDynamics = std::make_shared<LaneOffsetActionDynamics>(node.child("LaneOffsetActionDynamics")); }  
    if (node.child("LaneOffsetTarget")) { m_LaneOffsetTarget = std::make_shared<LaneOffsetTarget>(node.child("LaneOffsetTarget")); }  
}
void LaneOffsetAction::save(pugi::xml_node node)
{
    continuous.save(node.append_attribute("continuous")); 
    if (m_LaneOffsetActionDynamics ) { m_LaneOffsetActionDynamics->save(node.append_child("LaneOffsetActionDynamics")); }   
    if (m_LaneOffsetTarget ) { m_LaneOffsetTarget->save(node.append_child("LaneOffsetTarget")); }   
}
LaneOffsetActionDynamics::LaneOffsetActionDynamics(pugi::xml_node node) 
{
    if (node.attribute("dynamicsShape")) { dynamicsShape = DynamicsShape(node.attribute("dynamicsShape")); }  // >> union - handle properly
    if (node.attribute("maxLateralAcc")) { maxLateralAcc = Double(node.attribute("maxLateralAcc")); }  // >> union - handle properly
}
void LaneOffsetActionDynamics::save(pugi::xml_node node)
{
    dynamicsShape.save(node.append_attribute("dynamicsShape")); 
    maxLateralAcc.save(node.append_attribute("maxLateralAcc")); 
}
LaneOffsetTarget::LaneOffsetTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_LaneOffsetTarget = std::make_shared<LaneOffsetTarget_U>(node.first_child()); }  
}
void LaneOffsetTarget::save(pugi::xml_node node)
{
    if (m_LaneOffsetTarget) { m_LaneOffsetTarget->save(node); }  
}
LanePosition::LanePosition(pugi::xml_node node) 
{
    if (node.attribute("laneId")) { laneId = String(node.attribute("laneId")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.attribute("roadId")) { roadId = String(node.attribute("roadId")); }  // >> union - handle properly
    if (node.attribute("s")) { s = Double(node.attribute("s")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void LanePosition::save(pugi::xml_node node)
{
    laneId.save(node.append_attribute("laneId")); 
    offset.save(node.append_attribute("offset")); 
    roadId.save(node.append_attribute("roadId")); 
    s.save(node.append_attribute("s")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
LateralAction::LateralAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_LateralAction = std::make_shared<LateralAction_U>(node.first_child()); }  
}
void LateralAction::save(pugi::xml_node node)
{
    if (m_LateralAction) { m_LateralAction->save(node); }  
}
LateralDistanceAction::LateralDistanceAction(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.attribute("distance")) { distance = Double(node.attribute("distance")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.child("DynamicConstraints")) { m_DynamicConstraints = std::make_shared<DynamicConstraints>(node.child("DynamicConstraints")); }  
}
void LateralDistanceAction::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    continuous.save(node.append_attribute("continuous")); 
    distance.save(node.append_attribute("distance")); 
    freespace.save(node.append_attribute("freespace")); 
    if (m_DynamicConstraints ) { m_DynamicConstraints->save(node.append_child("DynamicConstraints")); }   
}
LongitudinalAction::LongitudinalAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_LongitudinalAction = std::make_shared<LongitudinalAction_U>(node.first_child()); }  
}
void LongitudinalAction::save(pugi::xml_node node)
{
    if (m_LongitudinalAction) { m_LongitudinalAction->save(node); }  
}
LongitudinalDistanceAction::LongitudinalDistanceAction(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.attribute("distance")) { distance = Double(node.attribute("distance")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("timeGap")) { timeGap = Double(node.attribute("timeGap")); }  // >> union - handle properly
    if (node.child("DynamicConstraints")) { m_DynamicConstraints = std::make_shared<DynamicConstraints>(node.child("DynamicConstraints")); }  
}
void LongitudinalDistanceAction::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    continuous.save(node.append_attribute("continuous")); 
    distance.save(node.append_attribute("distance")); 
    freespace.save(node.append_attribute("freespace")); 
    timeGap.save(node.append_attribute("timeGap")); 
    if (m_DynamicConstraints ) { m_DynamicConstraints->save(node.append_child("DynamicConstraints")); }   
}
Maneuver::Maneuver(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    for (pugi::xml_node e_Event = node.child("Event"); e_Event; e_Event= e_Event.next_sibling("Event"))
    {
        m_Events.push_back(std::make_shared<Event>(e_Event));
    }
}
void Maneuver::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    for (std::shared_ptr<Event> m_Event : m_Events ){ m_Event->save(node.append_child("Event")); } 
}
ManeuverCatalogLocation::ManeuverCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void ManeuverCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
ManeuverGroup::ManeuverGroup(pugi::xml_node node) 
{
    if (node.attribute("maximumExecutionCount")) { maximumExecutionCount = UnsignedInt(node.attribute("maximumExecutionCount")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("Actors")) { m_Actors = std::make_shared<Actors>(node.child("Actors")); }  
    for (pugi::xml_node e_CatalogReference = node.child("CatalogReference"); e_CatalogReference; e_CatalogReference= e_CatalogReference.next_sibling("CatalogReference"))
    {
        m_CatalogReferences.push_back(std::make_shared<CatalogReference>(e_CatalogReference));
    }
    for (pugi::xml_node e_Maneuver = node.child("Maneuver"); e_Maneuver; e_Maneuver= e_Maneuver.next_sibling("Maneuver"))
    {
        m_Maneuvers.push_back(std::make_shared<Maneuver>(e_Maneuver));
    }
}
void ManeuverGroup::save(pugi::xml_node node)
{
    maximumExecutionCount.save(node.append_attribute("maximumExecutionCount")); 
    name.save(node.append_attribute("name")); 
    if (m_Actors ) { m_Actors->save(node.append_child("Actors")); }   
    for (std::shared_ptr<CatalogReference> m_CatalogReference : m_CatalogReferences ){ m_CatalogReference->save(node.append_child("CatalogReference")); } 
    for (std::shared_ptr<Maneuver> m_Maneuver : m_Maneuvers ){ m_Maneuver->save(node.append_child("Maneuver")); } 
}
MiscObject::MiscObject(pugi::xml_node node) 
{
    if (node.attribute("mass")) { mass = Double(node.attribute("mass")); }  // >> union - handle properly
    if (node.attribute("miscObjectCategory")) { miscObjectCategory = MiscObjectCategory(node.attribute("miscObjectCategory")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void MiscObject::save(pugi::xml_node node)
{
    mass.save(node.append_attribute("mass")); 
    miscObjectCategory.save(node.append_attribute("miscObjectCategory")); 
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
MiscObjectCatalogLocation::MiscObjectCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void MiscObjectCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
ModifyRule::ModifyRule(pugi::xml_node node) 
{
    if (node.first_child()) { m_ModifyRule = std::make_shared<ModifyRule_U>(node.first_child()); }  
}
void ModifyRule::save(pugi::xml_node node)
{
    if (m_ModifyRule) { m_ModifyRule->save(node); }  
}
None::None(pugi::xml_node node) 
{
}
void None::save(pugi::xml_node node)
{
}
Nurbs::Nurbs(pugi::xml_node node) 
{
    if (node.attribute("order")) { order = UnsignedInt(node.attribute("order")); }  // >> union - handle properly
    for (pugi::xml_node e_ControlPoint = node.child("ControlPoint"); e_ControlPoint; e_ControlPoint= e_ControlPoint.next_sibling("ControlPoint"))
    {
        m_ControlPoints.push_back(std::make_shared<ControlPoint>(e_ControlPoint));
    }
    for (pugi::xml_node e_Knot = node.child("Knot"); e_Knot; e_Knot= e_Knot.next_sibling("Knot"))
    {
        m_Knots.push_back(std::make_shared<Knot>(e_Knot));
    }
}
void Nurbs::save(pugi::xml_node node)
{
    order.save(node.append_attribute("order")); 
    for (std::shared_ptr<ControlPoint> m_ControlPoint : m_ControlPoints ){ m_ControlPoint->save(node.append_child("ControlPoint")); } 
    for (std::shared_ptr<Knot> m_Knot : m_Knots ){ m_Knot->save(node.append_child("Knot")); } 
}
ObjectController::ObjectController(pugi::xml_node node) 
{
    if (node.first_child()) { m_ObjectController = std::make_shared<ObjectController_U>(node.first_child()); }  
}
void ObjectController::save(pugi::xml_node node)
{
    if (m_ObjectController) { m_ObjectController->save(node); }  
}
OffroadCondition::OffroadCondition(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
}
void OffroadCondition::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
}
OpenScenario::OpenScenario(pugi::xml_node node) 
{
    if (node.child("FileHeader")) { m_FileHeader = std::make_shared<FileHeader>(node.child("FileHeader")); }  
    { m_OpenScenarioCategory = std::make_shared<OpenScenarioCategory>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void OpenScenario::save(pugi::xml_node node)
{
    if (m_FileHeader ) { m_FileHeader->save(node.append_child("FileHeader")); }   
    { if (m_OpenScenarioCategory ) { m_OpenScenarioCategory->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
Orientation::Orientation(pugi::xml_node node) 
{
    if (node.attribute("h")) { h = Double(node.attribute("h")); }  // >> union - handle properly
    if (node.attribute("p")) { p = Double(node.attribute("p")); }  // >> union - handle properly
    if (node.attribute("r")) { r = Double(node.attribute("r")); }  // >> union - handle properly
    if (node.attribute("type")) { type = ReferenceContext(node.attribute("type")); }  // >> union - handle properly
}
void Orientation::save(pugi::xml_node node)
{
    h.save(node.append_attribute("h")); 
    p.save(node.append_attribute("p")); 
    r.save(node.append_attribute("r")); 
    type.save(node.append_attribute("type")); 
}
OverrideBrakeAction::OverrideBrakeAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void OverrideBrakeAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
}
OverrideClutchAction::OverrideClutchAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void OverrideClutchAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
}
OverrideControllerValueAction::OverrideControllerValueAction(pugi::xml_node node) 
{
    if (node.child("Throttle")) { m_Throttle = std::make_shared<OverrideThrottleAction>(node.child("Throttle")); }  
    if (node.child("Brake")) { m_Brake = std::make_shared<OverrideBrakeAction>(node.child("Brake")); }  
    if (node.child("Clutch")) { m_Clutch = std::make_shared<OverrideClutchAction>(node.child("Clutch")); }  
    if (node.child("ParkingBrake")) { m_ParkingBrake = std::make_shared<OverrideParkingBrakeAction>(node.child("ParkingBrake")); }  
    if (node.child("SteeringWheel")) { m_SteeringWheel = std::make_shared<OverrideSteeringWheelAction>(node.child("SteeringWheel")); }  
    if (node.child("Gear")) { m_Gear = std::make_shared<OverrideGearAction>(node.child("Gear")); }  
}
void OverrideControllerValueAction::save(pugi::xml_node node)
{
    if (m_Throttle ) { m_Throttle->save(node.append_child("Throttle")); }   
    if (m_Brake ) { m_Brake->save(node.append_child("Brake")); }   
    if (m_Clutch ) { m_Clutch->save(node.append_child("Clutch")); }   
    if (m_ParkingBrake ) { m_ParkingBrake->save(node.append_child("ParkingBrake")); }   
    if (m_SteeringWheel ) { m_SteeringWheel->save(node.append_child("SteeringWheel")); }   
    if (m_Gear ) { m_Gear->save(node.append_child("Gear")); }   
}
OverrideGearAction::OverrideGearAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("number")) { number = Double(node.attribute("number")); }  // >> union - handle properly
}
void OverrideGearAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    number.save(node.append_attribute("number")); 
}
OverrideParkingBrakeAction::OverrideParkingBrakeAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void OverrideParkingBrakeAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
}
OverrideSteeringWheelAction::OverrideSteeringWheelAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void OverrideSteeringWheelAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
}
OverrideThrottleAction::OverrideThrottleAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void OverrideThrottleAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
}
ParameterAction::ParameterAction(pugi::xml_node node) 
{
    if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // >> union - handle properly
    if (node.first_child()) { m_ParameterAction = std::make_shared<ParameterAction_U>(node.first_child()); }  
}
void ParameterAction::save(pugi::xml_node node)
{
    parameterRef.save(node.append_attribute("parameterRef")); 
    if (m_ParameterAction) { m_ParameterAction->save(node); }  
}
ParameterAddValueRule::ParameterAddValueRule(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void ParameterAddValueRule::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
ParameterAssignment::ParameterAssignment(pugi::xml_node node) 
{
    if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ParameterAssignment::save(pugi::xml_node node)
{
    parameterRef.save(node.append_attribute("parameterRef")); 
    value.save(node.append_attribute("value")); 
}
ParameterAssignments::ParameterAssignments(pugi::xml_node node) 
{
    for (pugi::xml_node e_ParameterAssignment = node.child("ParameterAssignment"); e_ParameterAssignment; e_ParameterAssignment= e_ParameterAssignment.next_sibling("ParameterAssignment"))
    {
        m_ParameterAssignments.push_back(std::make_shared<ParameterAssignment>(e_ParameterAssignment));
    }
}
void ParameterAssignments::save(pugi::xml_node node)
{
    for (std::shared_ptr<ParameterAssignment> m_ParameterAssignment : m_ParameterAssignments ){ m_ParameterAssignment->save(node.append_child("ParameterAssignment")); } 
}
ParameterCondition::ParameterCondition(pugi::xml_node node) 
{
    if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ParameterCondition::save(pugi::xml_node node)
{
    parameterRef.save(node.append_attribute("parameterRef")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
ParameterDeclaration::ParameterDeclaration(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("parameterType")) { parameterType = ParameterType(node.attribute("parameterType")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ParameterDeclaration::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    parameterType.save(node.append_attribute("parameterType")); 
    value.save(node.append_attribute("value")); 
}
ParameterDeclarations::ParameterDeclarations(pugi::xml_node node) 
{
    for (pugi::xml_node e_ParameterDeclaration = node.child("ParameterDeclaration"); e_ParameterDeclaration; e_ParameterDeclaration= e_ParameterDeclaration.next_sibling("ParameterDeclaration"))
    {
        m_ParameterDeclarations.push_back(std::make_shared<ParameterDeclaration>(e_ParameterDeclaration));
    }
}
void ParameterDeclarations::save(pugi::xml_node node)
{
    for (std::shared_ptr<ParameterDeclaration> m_ParameterDeclaration : m_ParameterDeclarations ){ m_ParameterDeclaration->save(node.append_child("ParameterDeclaration")); } 
}
ParameterModifyAction::ParameterModifyAction(pugi::xml_node node) 
{
    if (node.child("Rule")) { m_Rule = std::make_shared<ModifyRule>(node.child("Rule")); }  
}
void ParameterModifyAction::save(pugi::xml_node node)
{
    if (m_Rule ) { m_Rule->save(node.append_child("Rule")); }   
}
ParameterMultiplyByValueRule::ParameterMultiplyByValueRule(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void ParameterMultiplyByValueRule::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
ParameterSetAction::ParameterSetAction(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ParameterSetAction::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
Pedestrian::Pedestrian(pugi::xml_node node) 
{
    if (node.attribute("mass")) { mass = Double(node.attribute("mass")); }  // >> union - handle properly
    if (node.attribute("model")) { model = String(node.attribute("model")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("pedestrianCategory")) { pedestrianCategory = PedestrianCategory(node.attribute("pedestrianCategory")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void Pedestrian::save(pugi::xml_node node)
{
    mass.save(node.append_attribute("mass")); 
    model.save(node.append_attribute("model")); 
    name.save(node.append_attribute("name")); 
    pedestrianCategory.save(node.append_attribute("pedestrianCategory")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
PedestrianCatalogLocation::PedestrianCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void PedestrianCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
Performance::Performance(pugi::xml_node node) 
{
    if (node.attribute("maxAcceleration")) { maxAcceleration = Double(node.attribute("maxAcceleration")); }  // >> union - handle properly
    if (node.attribute("maxDeceleration")) { maxDeceleration = Double(node.attribute("maxDeceleration")); }  // >> union - handle properly
    if (node.attribute("maxSpeed")) { maxSpeed = Double(node.attribute("maxSpeed")); }  // >> union - handle properly
}
void Performance::save(pugi::xml_node node)
{
    maxAcceleration.save(node.append_attribute("maxAcceleration")); 
    maxDeceleration.save(node.append_attribute("maxDeceleration")); 
    maxSpeed.save(node.append_attribute("maxSpeed")); 
}
Phase::Phase(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    for (pugi::xml_node e_TrafficSignalState = node.child("TrafficSignalState"); e_TrafficSignalState; e_TrafficSignalState= e_TrafficSignalState.next_sibling("TrafficSignalState"))
    {
        m_TrafficSignalStates.push_back(std::make_shared<TrafficSignalState>(e_TrafficSignalState));
    }
}
void Phase::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
    name.save(node.append_attribute("name")); 
    for (std::shared_ptr<TrafficSignalState> m_TrafficSignalState : m_TrafficSignalStates ){ m_TrafficSignalState->save(node.append_child("TrafficSignalState")); } 
}
Polyline::Polyline(pugi::xml_node node) 
{
    for (pugi::xml_node e_Vertex = node.child("Vertex"); e_Vertex; e_Vertex= e_Vertex.next_sibling("Vertex"))
    {
        m_Vertexs.push_back(std::make_shared<Vertex>(e_Vertex));
    }
}
void Polyline::save(pugi::xml_node node)
{
    for (std::shared_ptr<Vertex> m_Vertex : m_Vertexs ){ m_Vertex->save(node.append_child("Vertex")); } 
}
Position::Position(pugi::xml_node node) 
{
    if (node.first_child()) { m_Position = std::make_shared<Position_U>(node.first_child()); }  
}
void Position::save(pugi::xml_node node)
{
    if (m_Position) { m_Position->save(node); }  
}
PositionInLaneCoordinates::PositionInLaneCoordinates(pugi::xml_node node) 
{
    if (node.attribute("laneId")) { laneId = String(node.attribute("laneId")); }  // >> union - handle properly
    if (node.attribute("laneOffset")) { laneOffset = Double(node.attribute("laneOffset")); }  // >> union - handle properly
    if (node.attribute("pathS")) { pathS = Double(node.attribute("pathS")); }  // >> union - handle properly
}
void PositionInLaneCoordinates::save(pugi::xml_node node)
{
    laneId.save(node.append_attribute("laneId")); 
    laneOffset.save(node.append_attribute("laneOffset")); 
    pathS.save(node.append_attribute("pathS")); 
}
PositionInRoadCoordinates::PositionInRoadCoordinates(pugi::xml_node node) 
{
    if (node.attribute("pathS")) { pathS = Double(node.attribute("pathS")); }  // >> union - handle properly
    if (node.attribute("t")) { t = Double(node.attribute("t")); }  // >> union - handle properly
}
void PositionInRoadCoordinates::save(pugi::xml_node node)
{
    pathS.save(node.append_attribute("pathS")); 
    t.save(node.append_attribute("t")); 
}
PositionOfCurrentEntity::PositionOfCurrentEntity(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
}
void PositionOfCurrentEntity::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
}
Precipitation::Precipitation(pugi::xml_node node) 
{
    if (node.attribute("intensity")) { intensity = Double(node.attribute("intensity")); }  // >> union - handle properly
    if (node.attribute("precipitationType")) { precipitationType = PrecipitationType(node.attribute("precipitationType")); }  // >> union - handle properly
}
void Precipitation::save(pugi::xml_node node)
{
    intensity.save(node.append_attribute("intensity")); 
    precipitationType.save(node.append_attribute("precipitationType")); 
}
Private::Private(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    for (pugi::xml_node e_PrivateAction = node.child("PrivateAction"); e_PrivateAction; e_PrivateAction= e_PrivateAction.next_sibling("PrivateAction"))
    {
        m_PrivateActions.push_back(std::make_shared<PrivateAction>(e_PrivateAction));
    }
}
void Private::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    for (std::shared_ptr<PrivateAction> m_PrivateAction : m_PrivateActions ){ m_PrivateAction->save(node.append_child("PrivateAction")); } 
}
PrivateAction::PrivateAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_PrivateAction = std::make_shared<PrivateAction_U>(node.first_child()); }  
}
void PrivateAction::save(pugi::xml_node node)
{
    if (m_PrivateAction) { m_PrivateAction->save(node); }  
}
Properties::Properties(pugi::xml_node node) 
{
    for (pugi::xml_node e_Property = node.child("Property"); e_Property; e_Property= e_Property.next_sibling("Property"))
    {
        m_Propertys.push_back(std::make_shared<Property>(e_Property));
    }
    for (pugi::xml_node e_File = node.child("File"); e_File; e_File= e_File.next_sibling("File"))
    {
        m_Files.push_back(std::make_shared<File>(e_File));
    }
}
void Properties::save(pugi::xml_node node)
{
    for (std::shared_ptr<Property> m_Property : m_Propertys ){ m_Property->save(node.append_child("Property")); } 
    for (std::shared_ptr<File> m_File : m_Files ){ m_File->save(node.append_child("File")); } 
}
Property::Property(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void Property::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    value.save(node.append_attribute("value")); 
}
ReachPositionCondition::ReachPositionCondition(pugi::xml_node node) 
{
    if (node.attribute("tolerance")) { tolerance = Double(node.attribute("tolerance")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void ReachPositionCondition::save(pugi::xml_node node)
{
    tolerance.save(node.append_attribute("tolerance")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
RelativeDistanceCondition::RelativeDistanceCondition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("relativeDistanceType")) { relativeDistanceType = RelativeDistanceType(node.attribute("relativeDistanceType")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void RelativeDistanceCondition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    freespace.save(node.append_attribute("freespace")); 
    relativeDistanceType.save(node.append_attribute("relativeDistanceType")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
RelativeLanePosition::RelativeLanePosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("dLane")) { dLane = Int(node.attribute("dLane")); }  // >> union - handle properly
    if (node.attribute("ds")) { ds = Double(node.attribute("ds")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeLanePosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    dLane.save(node.append_attribute("dLane")); 
    ds.save(node.append_attribute("ds")); 
    offset.save(node.append_attribute("offset")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RelativeObjectPosition::RelativeObjectPosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("dx")) { dx = Double(node.attribute("dx")); }  // >> union - handle properly
    if (node.attribute("dy")) { dy = Double(node.attribute("dy")); }  // >> union - handle properly
    if (node.attribute("dz")) { dz = Double(node.attribute("dz")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeObjectPosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    dx.save(node.append_attribute("dx")); 
    dy.save(node.append_attribute("dy")); 
    dz.save(node.append_attribute("dz")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RelativeRoadPosition::RelativeRoadPosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("ds")) { ds = Double(node.attribute("ds")); }  // >> union - handle properly
    if (node.attribute("dt")) { dt = Double(node.attribute("dt")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeRoadPosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    ds.save(node.append_attribute("ds")); 
    dt.save(node.append_attribute("dt")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RelativeSpeedCondition::RelativeSpeedCondition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void RelativeSpeedCondition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
RelativeSpeedToMaster::RelativeSpeedToMaster(pugi::xml_node node) 
{
    if (node.attribute("speedTargetValueType")) { speedTargetValueType = SpeedTargetValueType(node.attribute("speedTargetValueType")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void RelativeSpeedToMaster::save(pugi::xml_node node)
{
    speedTargetValueType.save(node.append_attribute("speedTargetValueType")); 
    value.save(node.append_attribute("value")); 
}
RelativeTargetLane::RelativeTargetLane(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Int(node.attribute("value")); }  // >> union - handle properly
}
void RelativeTargetLane::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    value.save(node.append_attribute("value")); 
}
RelativeTargetLaneOffset::RelativeTargetLaneOffset(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void RelativeTargetLaneOffset::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    value.save(node.append_attribute("value")); 
}
RelativeTargetSpeed::RelativeTargetSpeed(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.attribute("speedTargetValueType")) { speedTargetValueType = SpeedTargetValueType(node.attribute("speedTargetValueType")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void RelativeTargetSpeed::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    continuous.save(node.append_attribute("continuous")); 
    speedTargetValueType.save(node.append_attribute("speedTargetValueType")); 
    value.save(node.append_attribute("value")); 
}
RelativeWorldPosition::RelativeWorldPosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("dx")) { dx = Double(node.attribute("dx")); }  // >> union - handle properly
    if (node.attribute("dy")) { dy = Double(node.attribute("dy")); }  // >> union - handle properly
    if (node.attribute("dz")) { dz = Double(node.attribute("dz")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeWorldPosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    dx.save(node.append_attribute("dx")); 
    dy.save(node.append_attribute("dy")); 
    dz.save(node.append_attribute("dz")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RoadCondition::RoadCondition(pugi::xml_node node) 
{
    if (node.attribute("frictionScaleFactor")) { frictionScaleFactor = Double(node.attribute("frictionScaleFactor")); }  // >> union - handle properly
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void RoadCondition::save(pugi::xml_node node)
{
    frictionScaleFactor.save(node.append_attribute("frictionScaleFactor")); 
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
RoadNetwork::RoadNetwork(pugi::xml_node node) 
{
    if (node.child("LogicFile")) { m_LogicFile = std::make_shared<File>(node.child("LogicFile")); }  
    if (node.child("SceneGraphFile")) { m_SceneGraphFile = std::make_shared<File>(node.child("SceneGraphFile")); }  
    if (node.child("TrafficSignals")) { m_TrafficSignals = std::make_shared<TrafficSignals>(node.child("TrafficSignals")); }  
}
void RoadNetwork::save(pugi::xml_node node)
{
    if (m_LogicFile ) { m_LogicFile->save(node.append_child("LogicFile")); }   
    if (m_SceneGraphFile ) { m_SceneGraphFile->save(node.append_child("SceneGraphFile")); }   
    if (m_TrafficSignals ) { m_TrafficSignals->save(node.append_child("TrafficSignals")); }   
}
RoadPosition::RoadPosition(pugi::xml_node node) 
{
    if (node.attribute("roadId")) { roadId = String(node.attribute("roadId")); }  // >> union - handle properly
    if (node.attribute("s")) { s = Double(node.attribute("s")); }  // >> union - handle properly
    if (node.attribute("t")) { t = Double(node.attribute("t")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RoadPosition::save(pugi::xml_node node)
{
    roadId.save(node.append_attribute("roadId")); 
    s.save(node.append_attribute("s")); 
    t.save(node.append_attribute("t")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
Route::Route(pugi::xml_node node) 
{
    if (node.attribute("closed")) { closed = Boolean(node.attribute("closed")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    for (pugi::xml_node e_Waypoint = node.child("Waypoint"); e_Waypoint; e_Waypoint= e_Waypoint.next_sibling("Waypoint"))
    {
        m_Waypoints.push_back(std::make_shared<Waypoint>(e_Waypoint));
    }
}
void Route::save(pugi::xml_node node)
{
    closed.save(node.append_attribute("closed")); 
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    for (std::shared_ptr<Waypoint> m_Waypoint : m_Waypoints ){ m_Waypoint->save(node.append_child("Waypoint")); } 
}
RouteCatalogLocation::RouteCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void RouteCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
RoutePosition::RoutePosition(pugi::xml_node node) 
{
    if (node.child("RouteRef")) { m_RouteRef = std::make_shared<RouteRef>(node.child("RouteRef")); }  
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
    if (node.child("InRoutePosition")) { m_InRoutePosition = std::make_shared<InRoutePosition>(node.child("InRoutePosition")); }  
}
void RoutePosition::save(pugi::xml_node node)
{
    if (m_RouteRef ) { m_RouteRef->save(node.append_child("RouteRef")); }   
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
    if (m_InRoutePosition ) { m_InRoutePosition->save(node.append_child("InRoutePosition")); }   
}
RouteRef::RouteRef(pugi::xml_node node) 
{
    if (node.first_child()) { m_RouteRef = std::make_shared<RouteRef_U>(node.first_child()); }  
}
void RouteRef::save(pugi::xml_node node)
{
    if (m_RouteRef) { m_RouteRef->save(node); }  
}
RoutingAction::RoutingAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_RoutingAction = std::make_shared<RoutingAction_U>(node.first_child()); }  
}
void RoutingAction::save(pugi::xml_node node)
{
    if (m_RoutingAction) { m_RoutingAction->save(node); }  
}
ScenarioObject::ScenarioObject(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ObjectController")) { m_ObjectController = std::make_shared<ObjectController>(node.child("ObjectController")); }  
    { m_EntityObject = std::make_shared<EntityObject>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void ScenarioObject::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ObjectController ) { m_ObjectController->save(node.append_child("ObjectController")); }   
    { if (m_EntityObject ) { m_EntityObject->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
SelectedEntities::SelectedEntities(pugi::xml_node node) 
{
    if (node.first_child()) { m_SelectedEntities = std::make_shared<SelectedEntities_U>(node.first_child()); }  
}
void SelectedEntities::save(pugi::xml_node node)
{
    if (m_SelectedEntities) { m_SelectedEntities->save(node); }  
}
Shape::Shape(pugi::xml_node node) 
{
    if (node.first_child()) { m_Shape = std::make_shared<Shape_U>(node.first_child()); }  
}
void Shape::save(pugi::xml_node node)
{
    if (m_Shape) { m_Shape->save(node); }  
}
SimulationTimeCondition::SimulationTimeCondition(pugi::xml_node node) 
{
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void SimulationTimeCondition::save(pugi::xml_node node)
{
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
SpeedAction::SpeedAction(pugi::xml_node node) 
{
    if (node.child("SpeedActionDynamics")) { m_SpeedActionDynamics = std::make_shared<TransitionDynamics>(node.child("SpeedActionDynamics")); }  
    if (node.child("SpeedActionTarget")) { m_SpeedActionTarget = std::make_shared<SpeedActionTarget>(node.child("SpeedActionTarget")); }  
}
void SpeedAction::save(pugi::xml_node node)
{
    if (m_SpeedActionDynamics ) { m_SpeedActionDynamics->save(node.append_child("SpeedActionDynamics")); }   
    if (m_SpeedActionTarget ) { m_SpeedActionTarget->save(node.append_child("SpeedActionTarget")); }   
}
SpeedActionTarget::SpeedActionTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_SpeedActionTarget = std::make_shared<SpeedActionTarget_U>(node.first_child()); }  
}
void SpeedActionTarget::save(pugi::xml_node node)
{
    if (m_SpeedActionTarget) { m_SpeedActionTarget->save(node); }  
}
SpeedCondition::SpeedCondition(pugi::xml_node node) 
{
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void SpeedCondition::save(pugi::xml_node node)
{
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
StandStillCondition::StandStillCondition(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
}
void StandStillCondition::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
}
Story::Story(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    for (pugi::xml_node e_Act = node.child("Act"); e_Act; e_Act= e_Act.next_sibling("Act"))
    {
        m_Acts.push_back(std::make_shared<Act>(e_Act));
    }
}
void Story::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    for (std::shared_ptr<Act> m_Act : m_Acts ){ m_Act->save(node.append_child("Act")); } 
}
Storyboard::Storyboard(pugi::xml_node node) 
{
    if (node.child("Init")) { m_Init = std::make_shared<Init>(node.child("Init")); }  
    for (pugi::xml_node e_Story = node.child("Story"); e_Story; e_Story= e_Story.next_sibling("Story"))
    {
        m_Storys.push_back(std::make_shared<Story>(e_Story));
    }
    if (node.child("StopTrigger")) { m_StopTrigger = std::make_shared<Trigger>(node.child("StopTrigger")); }  
}
void Storyboard::save(pugi::xml_node node)
{
    if (m_Init ) { m_Init->save(node.append_child("Init")); }   
    for (std::shared_ptr<Story> m_Story : m_Storys ){ m_Story->save(node.append_child("Story")); } 
    if (m_StopTrigger ) { m_StopTrigger->save(node.append_child("StopTrigger")); }   
}
StoryboardElementStateCondition::StoryboardElementStateCondition(pugi::xml_node node) 
{
    if (node.attribute("storyboardElementRef")) { storyboardElementRef = String(node.attribute("storyboardElementRef")); }  // >> union - handle properly
    if (node.attribute("state")) { state = StoryboardElementState(node.attribute("state")); }  // >> union - handle properly
    if (node.attribute("storyboardElementType")) { storyboardElementType = StoryboardElementType(node.attribute("storyboardElementType")); }  // >> union - handle properly
}
void StoryboardElementStateCondition::save(pugi::xml_node node)
{
    storyboardElementRef.save(node.append_attribute("storyboardElementRef")); 
    state.save(node.append_attribute("state")); 
    storyboardElementType.save(node.append_attribute("storyboardElementType")); 
}
Sun::Sun(pugi::xml_node node) 
{
    if (node.attribute("azimuth")) { azimuth = Double(node.attribute("azimuth")); }  // >> union - handle properly
    if (node.attribute("elevation")) { elevation = Double(node.attribute("elevation")); }  // >> union - handle properly
    if (node.attribute("intensity")) { intensity = Double(node.attribute("intensity")); }  // >> union - handle properly
}
void Sun::save(pugi::xml_node node)
{
    azimuth.save(node.append_attribute("azimuth")); 
    elevation.save(node.append_attribute("elevation")); 
    intensity.save(node.append_attribute("intensity")); 
}
SynchronizeAction::SynchronizeAction(pugi::xml_node node) 
{
    if (node.attribute("masterEntityRef")) { masterEntityRef = String(node.attribute("masterEntityRef")); }  // >> union - handle properly
    if (node.child("TargetPositionMaster")) { m_TargetPositionMaster = std::make_shared<Position>(node.child("TargetPositionMaster")); }  
    if (node.child("TargetPosition")) { m_TargetPosition = std::make_shared<Position>(node.child("TargetPosition")); }  
    if (node.child("FinalSpeed")) { m_FinalSpeed = std::make_shared<FinalSpeed>(node.child("FinalSpeed")); }  
}
void SynchronizeAction::save(pugi::xml_node node)
{
    masterEntityRef.save(node.append_attribute("masterEntityRef")); 
    if (m_TargetPositionMaster ) { m_TargetPositionMaster->save(node.append_child("TargetPositionMaster")); }   
    if (m_TargetPosition ) { m_TargetPosition->save(node.append_child("TargetPosition")); }   
    if (m_FinalSpeed ) { m_FinalSpeed->save(node.append_child("FinalSpeed")); }   
}
TeleportAction::TeleportAction(pugi::xml_node node) 
{
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void TeleportAction::save(pugi::xml_node node)
{
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
TimeHeadwayCondition::TimeHeadwayCondition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void TimeHeadwayCondition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    alongRoute.save(node.append_attribute("alongRoute")); 
    freespace.save(node.append_attribute("freespace")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
TimeOfDay::TimeOfDay(pugi::xml_node node) 
{
    if (node.attribute("animation")) { animation = Boolean(node.attribute("animation")); }  // >> union - handle properly
    if (node.attribute("dateTime")) { dateTime = DateTime(node.attribute("dateTime")); }  // >> union - handle properly
}
void TimeOfDay::save(pugi::xml_node node)
{
    animation.save(node.append_attribute("animation")); 
    dateTime.save(node.append_attribute("dateTime")); 
}
TimeOfDayCondition::TimeOfDayCondition(pugi::xml_node node) 
{
    if (node.attribute("dateTime")) { dateTime = DateTime(node.attribute("dateTime")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
}
void TimeOfDayCondition::save(pugi::xml_node node)
{
    dateTime.save(node.append_attribute("dateTime")); 
    rule.save(node.append_attribute("rule")); 
}
TimeReference::TimeReference(pugi::xml_node node) 
{
    if (node.first_child()) { m_TimeReference = std::make_shared<TimeReference_U>(node.first_child()); }  
}
void TimeReference::save(pugi::xml_node node)
{
    if (m_TimeReference) { m_TimeReference->save(node); }  
}
TimeToCollisionCondition::TimeToCollisionCondition(pugi::xml_node node) 
{
    if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.child("TimeToCollisionConditionTarget")) { m_TimeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTarget>(node.child("TimeToCollisionConditionTarget")); }  
}
void TimeToCollisionCondition::save(pugi::xml_node node)
{
    alongRoute.save(node.append_attribute("alongRoute")); 
    freespace.save(node.append_attribute("freespace")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    if (m_TimeToCollisionConditionTarget ) { m_TimeToCollisionConditionTarget->save(node.append_child("TimeToCollisionConditionTarget")); }   
}
TimeToCollisionConditionTarget::TimeToCollisionConditionTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_TimeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTarget_U>(node.first_child()); }  
}
void TimeToCollisionConditionTarget::save(pugi::xml_node node)
{
    if (m_TimeToCollisionConditionTarget) { m_TimeToCollisionConditionTarget->save(node); }  
}
Timing::Timing(pugi::xml_node node) 
{
    if (node.attribute("domainAbsoluteRelative")) { domainAbsoluteRelative = ReferenceContext(node.attribute("domainAbsoluteRelative")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.attribute("scale")) { scale = Double(node.attribute("scale")); }  // >> union - handle properly
}
void Timing::save(pugi::xml_node node)
{
    domainAbsoluteRelative.save(node.append_attribute("domainAbsoluteRelative")); 
    offset.save(node.append_attribute("offset")); 
    scale.save(node.append_attribute("scale")); 
}
TrafficAction::TrafficAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_TrafficAction = std::make_shared<TrafficAction_U>(node.first_child()); }  
}
void TrafficAction::save(pugi::xml_node node)
{
    if (m_TrafficAction) { m_TrafficAction->save(node); }  
}
TrafficDefinition::TrafficDefinition(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("VehicleCategoryDistribution")) { m_VehicleCategoryDistribution = std::make_shared<VehicleCategoryDistribution>(node.child("VehicleCategoryDistribution")); }  
    if (node.child("ControllerDistribution")) { m_ControllerDistribution = std::make_shared<ControllerDistribution>(node.child("ControllerDistribution")); }  
}
void TrafficDefinition::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_VehicleCategoryDistribution ) { m_VehicleCategoryDistribution->save(node.append_child("VehicleCategoryDistribution")); }   
    if (m_ControllerDistribution ) { m_ControllerDistribution->save(node.append_child("ControllerDistribution")); }   
}
TrafficSignalAction::TrafficSignalAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_TrafficSignalAction = std::make_shared<TrafficSignalAction_U>(node.first_child()); }  
}
void TrafficSignalAction::save(pugi::xml_node node)
{
    if (m_TrafficSignalAction) { m_TrafficSignalAction->save(node); }  
}
TrafficSignalCondition::TrafficSignalCondition(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("state")) { state = String(node.attribute("state")); }  // >> union - handle properly
}
void TrafficSignalCondition::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    state.save(node.append_attribute("state")); 
}
TrafficSignalController::TrafficSignalController(pugi::xml_node node) 
{
    if (node.attribute("delay")) { delay = Double(node.attribute("delay")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("reference")) { reference = String(node.attribute("reference")); }  // >> union - handle properly
    for (pugi::xml_node e_Phase = node.child("Phase"); e_Phase; e_Phase= e_Phase.next_sibling("Phase"))
    {
        m_Phases.push_back(std::make_shared<Phase>(e_Phase));
    }
}
void TrafficSignalController::save(pugi::xml_node node)
{
    delay.save(node.append_attribute("delay")); 
    name.save(node.append_attribute("name")); 
    reference.save(node.append_attribute("reference")); 
    for (std::shared_ptr<Phase> m_Phase : m_Phases ){ m_Phase->save(node.append_child("Phase")); } 
}
TrafficSignals::TrafficSignals(pugi::xml_node node) 
{
    for (pugi::xml_node e_TrafficSignalController = node.child("TrafficSignalController"); e_TrafficSignalController; e_TrafficSignalController= e_TrafficSignalController.next_sibling("TrafficSignalController"))
    {
        m_TrafficSignalControllers.push_back(std::make_shared<TrafficSignalController>(e_TrafficSignalController));
    }
}
void TrafficSignals::save(pugi::xml_node node)
{
    for (std::shared_ptr<TrafficSignalController> m_TrafficSignalController : m_TrafficSignalControllers ){ m_TrafficSignalController->save(node.append_child("TrafficSignalController")); } 
}
TrafficSignalControllerAction::TrafficSignalControllerAction(pugi::xml_node node) 
{
    if (node.attribute("trafficSignalControllerRef")) { trafficSignalControllerRef = String(node.attribute("trafficSignalControllerRef")); }  // >> union - handle properly
    if (node.attribute("phase")) { phase = String(node.attribute("phase")); }  // >> union - handle properly
}
void TrafficSignalControllerAction::save(pugi::xml_node node)
{
    trafficSignalControllerRef.save(node.append_attribute("trafficSignalControllerRef")); 
    phase.save(node.append_attribute("phase")); 
}
TrafficSignalControllerCondition::TrafficSignalControllerCondition(pugi::xml_node node) 
{
    if (node.attribute("trafficSignalControllerRef")) { trafficSignalControllerRef = String(node.attribute("trafficSignalControllerRef")); }  // >> union - handle properly
    if (node.attribute("phase")) { phase = String(node.attribute("phase")); }  // >> union - handle properly
}
void TrafficSignalControllerCondition::save(pugi::xml_node node)
{
    trafficSignalControllerRef.save(node.append_attribute("trafficSignalControllerRef")); 
    phase.save(node.append_attribute("phase")); 
}
TrafficSignalState::TrafficSignalState(pugi::xml_node node) 
{
    if (node.attribute("state")) { state = String(node.attribute("state")); }  // >> union - handle properly
    if (node.attribute("trafficSignalId")) { trafficSignalId = String(node.attribute("trafficSignalId")); }  // >> union - handle properly
}
void TrafficSignalState::save(pugi::xml_node node)
{
    state.save(node.append_attribute("state")); 
    trafficSignalId.save(node.append_attribute("trafficSignalId")); 
}
TrafficSignalStateAction::TrafficSignalStateAction(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("state")) { state = String(node.attribute("state")); }  // >> union - handle properly
}
void TrafficSignalStateAction::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    state.save(node.append_attribute("state")); 
}
TrafficSinkAction::TrafficSinkAction(pugi::xml_node node) 
{
    if (node.attribute("radius")) { radius = Double(node.attribute("radius")); }  // >> union - handle properly
    if (node.attribute("rate")) { rate = Double(node.attribute("rate")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
    if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }  
}
void TrafficSinkAction::save(pugi::xml_node node)
{
    radius.save(node.append_attribute("radius")); 
    rate.save(node.append_attribute("rate")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
    if (m_TrafficDefinition ) { m_TrafficDefinition->save(node.append_child("TrafficDefinition")); }   
}
TrafficSourceAction::TrafficSourceAction(pugi::xml_node node) 
{
    if (node.attribute("radius")) { radius = Double(node.attribute("radius")); }  // >> union - handle properly
    if (node.attribute("rate")) { rate = Double(node.attribute("rate")); }  // >> union - handle properly
    if (node.attribute("velocity")) { velocity = Double(node.attribute("velocity")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
    if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }  
}
void TrafficSourceAction::save(pugi::xml_node node)
{
    radius.save(node.append_attribute("radius")); 
    rate.save(node.append_attribute("rate")); 
    velocity.save(node.append_attribute("velocity")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
    if (m_TrafficDefinition ) { m_TrafficDefinition->save(node.append_child("TrafficDefinition")); }   
}
TrafficSwarmAction::TrafficSwarmAction(pugi::xml_node node) 
{
    if (node.attribute("innerRadius")) { innerRadius = Double(node.attribute("innerRadius")); }  // >> union - handle properly
    if (node.attribute("numberOfVehicles")) { numberOfVehicles = UnsignedInt(node.attribute("numberOfVehicles")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.attribute("semiMajorAxis")) { semiMajorAxis = Double(node.attribute("semiMajorAxis")); }  // >> union - handle properly
    if (node.attribute("semiMinorAxis")) { semiMinorAxis = Double(node.attribute("semiMinorAxis")); }  // >> union - handle properly
    if (node.attribute("velocity")) { velocity = Double(node.attribute("velocity")); }  // >> union - handle properly
    if (node.child("CentralObject")) { m_CentralObject = std::make_shared<CentralSwarmObject>(node.child("CentralObject")); }  
    if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }  
}
void TrafficSwarmAction::save(pugi::xml_node node)
{
    innerRadius.save(node.append_attribute("innerRadius")); 
    numberOfVehicles.save(node.append_attribute("numberOfVehicles")); 
    offset.save(node.append_attribute("offset")); 
    semiMajorAxis.save(node.append_attribute("semiMajorAxis")); 
    semiMinorAxis.save(node.append_attribute("semiMinorAxis")); 
    velocity.save(node.append_attribute("velocity")); 
    if (m_CentralObject ) { m_CentralObject->save(node.append_child("CentralObject")); }   
    if (m_TrafficDefinition ) { m_TrafficDefinition->save(node.append_child("TrafficDefinition")); }   
}
Trajectory::Trajectory(pugi::xml_node node) 
{
    if (node.attribute("closed")) { closed = Boolean(node.attribute("closed")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("Shape")) { m_Shape = std::make_shared<Shape>(node.child("Shape")); }  
}
void Trajectory::save(pugi::xml_node node)
{
    closed.save(node.append_attribute("closed")); 
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_Shape ) { m_Shape->save(node.append_child("Shape")); }   
}
TrajectoryCatalogLocation::TrajectoryCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void TrajectoryCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
TrajectoryFollowingMode::TrajectoryFollowingMode(pugi::xml_node node) 
{
    if (node.attribute("followingMode")) { followingMode = FollowingMode(node.attribute("followingMode")); }  // >> union - handle properly
}
void TrajectoryFollowingMode::save(pugi::xml_node node)
{
    followingMode.save(node.append_attribute("followingMode")); 
}
TransitionDynamics::TransitionDynamics(pugi::xml_node node) 
{
    if (node.attribute("dynamicsDimension")) { dynamicsDimension = DynamicsDimension(node.attribute("dynamicsDimension")); }  // >> union - handle properly
    if (node.attribute("dynamicsShape")) { dynamicsShape = DynamicsShape(node.attribute("dynamicsShape")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void TransitionDynamics::save(pugi::xml_node node)
{
    dynamicsDimension.save(node.append_attribute("dynamicsDimension")); 
    dynamicsShape.save(node.append_attribute("dynamicsShape")); 
    value.save(node.append_attribute("value")); 
}
TraveledDistanceCondition::TraveledDistanceCondition(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void TraveledDistanceCondition::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
Trigger::Trigger(pugi::xml_node node) 
{
    for (pugi::xml_node e_ConditionGroup = node.child("ConditionGroup"); e_ConditionGroup; e_ConditionGroup= e_ConditionGroup.next_sibling("ConditionGroup"))
    {
        m_ConditionGroups.push_back(std::make_shared<ConditionGroup>(e_ConditionGroup));
    }
}
void Trigger::save(pugi::xml_node node)
{
    for (std::shared_ptr<ConditionGroup> m_ConditionGroup : m_ConditionGroups ){ m_ConditionGroup->save(node.append_child("ConditionGroup")); } 
}
TriggeringEntities::TriggeringEntities(pugi::xml_node node) 
{
    if (node.attribute("triggeringEntitiesRule")) { triggeringEntitiesRule = TriggeringEntitiesRule(node.attribute("triggeringEntitiesRule")); }  // >> union - handle properly
    for (pugi::xml_node e_EntityRef = node.child("EntityRef"); e_EntityRef; e_EntityRef= e_EntityRef.next_sibling("EntityRef"))
    {
        m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
    }
}
void TriggeringEntities::save(pugi::xml_node node)
{
    triggeringEntitiesRule.save(node.append_attribute("triggeringEntitiesRule")); 
    for (std::shared_ptr<EntityRef> m_EntityRef : m_EntityRefs ){ m_EntityRef->save(node.append_child("EntityRef")); } 
}
UserDefinedAction::UserDefinedAction(pugi::xml_node node) 
{
    if (node.child("CustomCommandAction")) { m_CustomCommandAction = std::make_shared<CustomCommandAction>(node.child("CustomCommandAction")); }  
}
void UserDefinedAction::save(pugi::xml_node node)
{
    if (m_CustomCommandAction ) { m_CustomCommandAction->save(node.append_child("CustomCommandAction")); }   
}
UserDefinedValueCondition::UserDefinedValueCondition(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void UserDefinedValueCondition::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
Vehicle::Vehicle(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("vehicleCategory")) { vehicleCategory = VehicleCategory(node.attribute("vehicleCategory")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
    if (node.child("Performance")) { m_Performance = std::make_shared<Performance>(node.child("Performance")); }  
    if (node.child("Axles")) { m_Axles = std::make_shared<Axles>(node.child("Axles")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void Vehicle::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    vehicleCategory.save(node.append_attribute("vehicleCategory")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
    if (m_Performance ) { m_Performance->save(node.append_child("Performance")); }   
    if (m_Axles ) { m_Axles->save(node.append_child("Axles")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
VehicleCatalogLocation::VehicleCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void VehicleCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
VehicleCategoryDistribution::VehicleCategoryDistribution(pugi::xml_node node) 
{
    for (pugi::xml_node e_VehicleCategoryDistributionEntry = node.child("VehicleCategoryDistributionEntry"); e_VehicleCategoryDistributionEntry; e_VehicleCategoryDistributionEntry= e_VehicleCategoryDistributionEntry.next_sibling("VehicleCategoryDistributionEntry"))
    {
        m_VehicleCategoryDistributionEntrys.push_back(std::make_shared<VehicleCategoryDistributionEntry>(e_VehicleCategoryDistributionEntry));
    }
}
void VehicleCategoryDistribution::save(pugi::xml_node node)
{
    for (std::shared_ptr<VehicleCategoryDistributionEntry> m_VehicleCategoryDistributionEntry : m_VehicleCategoryDistributionEntrys ){ m_VehicleCategoryDistributionEntry->save(node.append_child("VehicleCategoryDistributionEntry")); } 
}
VehicleCategoryDistributionEntry::VehicleCategoryDistributionEntry(pugi::xml_node node) 
{
    if (node.attribute("category")) { category = VehicleCategory(node.attribute("category")); }  // >> union - handle properly
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
}
void VehicleCategoryDistributionEntry::save(pugi::xml_node node)
{
    category.save(node.append_attribute("category")); 
    weight.save(node.append_attribute("weight")); 
}
Vertex::Vertex(pugi::xml_node node) 
{
    if (node.attribute("time")) { time = Double(node.attribute("time")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void Vertex::save(pugi::xml_node node)
{
    time.save(node.append_attribute("time")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
VisibilityAction::VisibilityAction(pugi::xml_node node) 
{
    if (node.attribute("graphics")) { graphics = Boolean(node.attribute("graphics")); }  // >> union - handle properly
    if (node.attribute("sensors")) { sensors = Boolean(node.attribute("sensors")); }  // >> union - handle properly
    if (node.attribute("traffic")) { traffic = Boolean(node.attribute("traffic")); }  // >> union - handle properly
}
void VisibilityAction::save(pugi::xml_node node)
{
    graphics.save(node.append_attribute("graphics")); 
    sensors.save(node.append_attribute("sensors")); 
    traffic.save(node.append_attribute("traffic")); 
}
Waypoint::Waypoint(pugi::xml_node node) 
{
    if (node.attribute("routeStrategy")) { routeStrategy = RouteStrategy(node.attribute("routeStrategy")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void Waypoint::save(pugi::xml_node node)
{
    routeStrategy.save(node.append_attribute("routeStrategy")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
Weather::Weather(pugi::xml_node node) 
{
    if (node.attribute("cloudState")) { cloudState = CloudState(node.attribute("cloudState")); }  // >> union - handle properly
    if (node.child("Sun")) { m_Sun = std::make_shared<Sun>(node.child("Sun")); }  
    if (node.child("Fog")) { m_Fog = std::make_shared<Fog>(node.child("Fog")); }  
    if (node.child("Precipitation")) { m_Precipitation = std::make_shared<Precipitation>(node.child("Precipitation")); }  
}
void Weather::save(pugi::xml_node node)
{
    cloudState.save(node.append_attribute("cloudState")); 
    if (m_Sun ) { m_Sun->save(node.append_child("Sun")); }   
    if (m_Fog ) { m_Fog->save(node.append_child("Fog")); }   
    if (m_Precipitation ) { m_Precipitation->save(node.append_child("Precipitation")); }   
}
WorldPosition::WorldPosition(pugi::xml_node node) 
{
    if (node.attribute("h")) { h = Double(node.attribute("h")); }  // >> union - handle properly
    if (node.attribute("p")) { p = Double(node.attribute("p")); }  // >> union - handle properly
    if (node.attribute("r")) { r = Double(node.attribute("r")); }  // >> union - handle properly
    if (node.attribute("x")) { x = Double(node.attribute("x")); }  // >> union - handle properly
    if (node.attribute("y")) { y = Double(node.attribute("y")); }  // >> union - handle properly
    if (node.attribute("z")) { z = Double(node.attribute("z")); }  // >> union - handle properly
}
void WorldPosition::save(pugi::xml_node node)
{
    h.save(node.append_attribute("h")); 
    p.save(node.append_attribute("p")); 
    r.save(node.append_attribute("r")); 
    x.save(node.append_attribute("x")); 
    y.save(node.append_attribute("y")); 
    z.save(node.append_attribute("z")); 
}
// xs:group -> aliased to group definition
CatalogDefinition::CatalogDefinition(pugi::xml_node node)
{
    if (node.child("Catalog")) { m_Catalog = std::make_shared<Catalog>(node.child("Catalog")); }  
}
// xs:group -> aliased to group definition
EntityObject::EntityObject(pugi::xml_node node)
{
    if (node.child("CatalogReference")) { m_CatalogReference = std::make_shared<CatalogReference>(node.child("CatalogReference")); }  
    if (node.child("Vehicle")) { m_Vehicle = std::make_shared<Vehicle>(node.child("Vehicle")); }  
    if (node.child("Pedestrian")) { m_Pedestrian = std::make_shared<Pedestrian>(node.child("Pedestrian")); }  
    if (node.child("MiscObject")) { m_MiscObject = std::make_shared<MiscObject>(node.child("MiscObject")); }  
}
// xs:group -> aliased to group definition
OpenScenarioCategory::OpenScenarioCategory(pugi::xml_node node)
{
    { m_ScenarioDefinition = std::make_shared<ScenarioDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
    { m_CatalogDefinition = std::make_shared<CatalogDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
}
// xs:group -> aliased to group definition
ScenarioDefinition::ScenarioDefinition(pugi::xml_node node)
{
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("CatalogLocations")) { m_CatalogLocations = std::make_shared<CatalogLocations>(node.child("CatalogLocations")); }  
    if (node.child("RoadNetwork")) { m_RoadNetwork = std::make_shared<RoadNetwork>(node.child("RoadNetwork")); }  
    if (node.child("Entities")) { m_Entities = std::make_shared<Entities>(node.child("Entities")); }  
    if (node.child("Storyboard")) { m_Storyboard = std::make_shared<Storyboard>(node.child("Storyboard")); }  
}
// xs:group -> aliased to group definition
void CatalogDefinition::save(pugi::xml_node node)
{
    if (m_Catalog ) { m_Catalog->save(node.append_child("Catalog")); }   
}
// xs:group -> aliased to group definition
void EntityObject::save(pugi::xml_node node)
{
    if (m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }   
    if (m_Vehicle ) { m_Vehicle->save(node.append_child("Vehicle")); }   
    if (m_Pedestrian ) { m_Pedestrian->save(node.append_child("Pedestrian")); }   
    if (m_MiscObject ) { m_MiscObject->save(node.append_child("MiscObject")); }   
}
// xs:group -> aliased to group definition
void OpenScenarioCategory::save(pugi::xml_node node)
{
    { if (m_ScenarioDefinition ) { m_ScenarioDefinition->save(node); } } // Node has no xml def, same node passes through until it finds an element.
    { if (m_CatalogDefinition ) { m_CatalogDefinition->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
// xs:group -> aliased to group definition
void ScenarioDefinition::save(pugi::xml_node node)
{
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_CatalogLocations ) { m_CatalogLocations->save(node.append_child("CatalogLocations")); }   
    if (m_RoadNetwork ) { m_RoadNetwork->save(node.append_child("RoadNetwork")); }   
    if (m_Entities ) { m_Entities->save(node.append_child("Entities")); }   
    if (m_Storyboard ) { m_Storyboard->save(node.append_child("Storyboard")); }   
}
xosc::xosc()
{
}

void xosc::loadString(std::string xosc) {
    bool status = m_doc.load_buffer(xosc.c_str(), xosc.size());
    if (status)
    {
        std::cout << "Loaded XML from string: " << xosc.c_str()<<"\n";
    }
    else
    {
        std::cout << " Failed to load xml definition from string .. " << xosc.c_str() <<"\n";
        return;
    }
    m_root = m_doc.root();
}

void xosc::load(std::string xoscfilename )
{
    bool status = m_doc.load_file(xoscfilename.c_str());
    if (status)
    {
        std::cout << "Loaded XML File : " << xoscfilename.c_str()<<"\n";
    }
    else
    {
        std::cout << " Failed to load xml definition file .. " << xoscfilename.c_str() <<"\n";
        return;
    }
    m_root = m_doc.root();
}
void xosc::parse()
{
    try {
        m_OpenSCENARIO = std::make_shared<OpenSCENARIO>(m_root.child("OpenSCENARIO"));
        std::cout << "OpenSCENARIO parse successfully " << m_OpenSCENARIO<< std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR :Exception .. " << e.what() << std::endl;
    }
}
void xosc::save(std::string filename)
{
    pugi::xml_document doc;
    m_OpenSCENARIO->save(doc.append_child("OpenSCENARIO"));
    doc.save_file(filename.c_str());
}
xosc::~xosc()
{
}

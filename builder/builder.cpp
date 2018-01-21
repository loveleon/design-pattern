#include "builder.h"

FlatBuilder::FlatBuilder()
{
	this->m_house = new House;
}

void FlatBuilder::buildDoor()
{
	this->m_house->setDoor("flat door");
}

void FlatBuilder::buildWall()
{
	this->m_house->setWall("flat wall");
}

void FlatBuilder::buildWindow()
{
	this->m_house->setWindow("flat window");
}

House *FlatBuilder::getHouse()
{
	return this->m_house;
}

VillaBuilder::VillaBuilder()
{
	this->m_house = new House;
}

void VillaBuilder::buildDoor()
{
	this->m_house->setDoor("villa door");
}

void VillaBuilder::buildWall()
{
	this->m_house->setWall("villa wall");
}

void VillaBuilder::buildWindow()
{
	this->m_house->setWindow("villa window");
}

House *VillaBuilder::getHouse()
{
	return this->m_house;
}